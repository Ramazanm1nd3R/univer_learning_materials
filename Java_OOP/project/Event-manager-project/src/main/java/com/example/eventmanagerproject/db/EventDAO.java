package com.example.eventmanagerproject.db;

import com.example.eventmanagerproject.model.Event;

import java.sql.*;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;

public class EventDAO {

    public boolean addEvent(Event event) {
        String sql = "INSERT INTO events (title, description, date, location, creator_id) VALUES (?, ?, ?, ?, ?)";
        try (Connection conn = DBUtil.getConnection(); PreparedStatement stmt = conn.prepareStatement(sql)) {
            stmt.setString(1, event.getTitle());
            stmt.setString(2, event.getDescription());
            stmt.setTimestamp(3, Timestamp.valueOf(event.getDate()));
            stmt.setString(4, event.getLocation());
            stmt.setInt(5, event.getCreatorId());
            stmt.executeUpdate();
            return true;
        } catch (SQLException e) {
            System.out.println("❌ Error adding event: " + e.getMessage());
            return false;
        }
    }

    public List<Event> getAllEvents() {
        List<Event> events = new ArrayList<>();
        String sql = "SELECT * FROM events ORDER BY date";
        try (Connection conn = DBUtil.getConnection(); Statement stmt = conn.createStatement()) {
            ResultSet rs = stmt.executeQuery(sql);
            while (rs.next()) {
                Event event = new Event(
                        rs.getInt("id"),
                        rs.getString("title"),
                        rs.getString("description"),
                        rs.getTimestamp("date").toLocalDateTime(),
                        rs.getString("location"),
                        rs.getInt("creator_id")
                );
                events.add(event);
            }
        } catch (SQLException e) {
            System.out.println("❌ Error fetching events: " + e.getMessage());
        }
        return events;
    }

    public int countParticipants(int eventId) {
        String sql = "SELECT COUNT(*) FROM participants WHERE event_id = ?";
        try (Connection conn = DBUtil.getConnection();
             PreparedStatement stmt = conn.prepareStatement(sql)) {
            stmt.setInt(1, eventId);
            ResultSet rs = stmt.executeQuery();
            if (rs.next()) {
                return rs.getInt(1);
            }
        } catch (SQLException e) {
            System.out.println("❌ Error counting participants: " + e.getMessage());
        }
        return 0;
    }

    public boolean addParticipant(int eventId, int userId) {
        String sql = "INSERT INTO participants (event_id, user_id) VALUES (?, ?) ON CONFLICT DO NOTHING";
        try (Connection conn = DBUtil.getConnection();
             PreparedStatement stmt = conn.prepareStatement(sql)) {
            stmt.setInt(1, eventId);
            stmt.setInt(2, userId);
            return stmt.executeUpdate() > 0;
        } catch (SQLException e) {
            System.out.println("❌ Error joining event: " + e.getMessage());
            return false;
        }
    }

    public boolean isUserParticipant(int eventId, int userId) {
        String sql = "SELECT 1 FROM participants WHERE event_id = ? AND user_id = ?";
        try (Connection conn = DBUtil.getConnection();
             PreparedStatement stmt = conn.prepareStatement(sql)) {
            stmt.setInt(1, eventId);
            stmt.setInt(2, userId);
            ResultSet rs = stmt.executeQuery();
            return rs.next();
        } catch (SQLException e) {
            System.out.println("❌ Error checking participation: " + e.getMessage());
            return false;
        }
    }

    public boolean removeParticipant(int eventId, int userId) {
        String sql = "DELETE FROM participants WHERE event_id = ? AND user_id = ?";
        try (Connection conn = DBUtil.getConnection();
             PreparedStatement stmt = conn.prepareStatement(sql)) {
            stmt.setInt(1, eventId);
            stmt.setInt(2, userId);
            return stmt.executeUpdate() > 0;
        } catch (SQLException e) {
            System.out.println("❌ Error removing participant: " + e.getMessage());
            return false;
        }
    }

    public boolean hasAccessToChat(int eventId, int userId) {
        String sql = "SELECT 1 FROM events WHERE id = ? AND creator_id = ?"
                + " UNION SELECT 1 FROM participants WHERE event_id = ? AND user_id = ?";
        try (Connection conn = DBUtil.getConnection();
             PreparedStatement stmt = conn.prepareStatement(sql)) {
            stmt.setInt(1, eventId);
            stmt.setInt(2, userId);
            stmt.setInt(3, eventId);
            stmt.setInt(4, userId);
            ResultSet rs = stmt.executeQuery();
            return rs.next();
        } catch (SQLException e) {
            System.out.println("❌ Error checking chat access: " + e.getMessage());
            return false;
        }
    }
}
