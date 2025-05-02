package com.example.eventmanagerproject.db;

import com.example.eventmanagerproject.model.Message;

import java.sql.*;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;

public class MessageDAO {

    public boolean addMessage(int eventId, Message message) {
        String sql = "INSERT INTO messages (event_id, sender_name, content, timestamp) VALUES (?, ?, ?, ?)";
        try (Connection conn = DBUtil.getConnection(); PreparedStatement stmt = conn.prepareStatement(sql)) {
            stmt.setInt(1, eventId);
            stmt.setString(2, message.getSender());
            stmt.setString(3, message.getContent());
            stmt.setTimestamp(4, Timestamp.valueOf(message.getTimestamp()));
            stmt.executeUpdate();
            return true;
        } catch (SQLException e) {
            System.out.println("❌ Error saving message: " + e.getMessage());
            return false;
        }
    }

    public List<Message> getMessagesByEventId(int eventId) {
        List<Message> messages = new ArrayList<>();
        String sql = "SELECT * FROM messages WHERE event_id = ? ORDER BY timestamp ASC";
        try (Connection conn = DBUtil.getConnection(); PreparedStatement stmt = conn.prepareStatement(sql)) {
            stmt.setInt(1, eventId);
            ResultSet rs = stmt.executeQuery();
            while (rs.next()) {
                Message message = new Message(
                        rs.getString("sender_name"),
                        rs.getString("content"),
                        rs.getTimestamp("timestamp").toLocalDateTime()
                );
                messages.add(message);
            }
        } catch (SQLException e) {
            System.out.println("❌ Error retrieving messages: " + e.getMessage());
        }
        return messages;
    }
}
