package com.example.eventmanagerproject.util;

import com.example.eventmanagerproject.db.UserDAO;
import com.example.eventmanagerproject.model.User;

import java.io.*;

public class SessionManager {
    private static final String SESSION_FILE = "session.dat";

    public static void saveUserId(int userId) {
        try (FileWriter writer = new FileWriter(SESSION_FILE)) {
            writer.write(String.valueOf(userId));
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void loadSession() {
        try (BufferedReader reader = new BufferedReader(new FileReader(SESSION_FILE))) {
            String line = reader.readLine();
            if (line != null) {
                int userId = Integer.parseInt(line);
                User user = new UserDAO().getUserById(userId);
                if (user != null) {
                    Session.setCurrentUser(user);
                }
            }
        } catch (IOException e) {
            // No session file = no problem
        }
    }

    public static void clearSession() {
        File file = new File(SESSION_FILE);
        if (file.exists()) file.delete();
    }
}
