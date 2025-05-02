package com.example.eventmanagerproject.util;

import com.example.eventmanagerproject.model.Event;

import java.io.*;
import java.util.ArrayList;
import java.util.List;

public class LocalStorageUtil {

    private static final String FILE = "local_events.dat";

    public static void saveEvents(List<Event> events) {
        try (ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream(FILE))) {
            out.writeObject(events);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void addEventLocally(Event event) {
        List<Event> current = getAllEvents();
        current.add(event);
        saveEvents(current);
    }

    public static List<Event> getAllEvents() {
        File file = new File(FILE);
        if (!file.exists()) return new ArrayList<>();
        try (ObjectInputStream in = new ObjectInputStream(new FileInputStream(FILE))) {
            return (List<Event>) in.readObject();
        } catch (Exception e) {
            return new ArrayList<>();
        }
    }

    public static List<Event> getUnsyncedEvents() {
        List<Event> all = getAllEvents();
        List<Event> unsynced = new ArrayList<>();
        for (Event e : all) {
            if (e.getId() == 0) unsynced.add(e);
        }
        return unsynced;
    }

    public static void removeSyncedEvents() {
        List<Event> all = getAllEvents();
        all.removeIf(e -> e.getId() == 0); // оставим только те, которые уже синхронизированы
        saveEvents(all);
    }

    public static void clear() {
        new File(FILE).delete();
    }
}
