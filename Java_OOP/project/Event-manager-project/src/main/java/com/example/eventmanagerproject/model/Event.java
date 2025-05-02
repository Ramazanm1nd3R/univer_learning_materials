package com.example.eventmanagerproject.model;

import java.io.Serializable;
import java.time.LocalDateTime;

public class Event implements Serializable {
    private int id;
    private String title;
    private String description;
    private LocalDateTime date;
    private String location;
    private int creatorId;

    public Event(int id, String title, String description, LocalDateTime date, String location, int creatorId) {
        this.id = id;
        this.title = title;
        this.description = description;
        this.date = date;
        this.location = location;
        this.creatorId = creatorId;
    }

    // Дополнительный конструктор (если нужно создавать событие без id, например, при вставке)
    public Event(String title, String description, LocalDateTime date, String location, int creatorId) {
        this(0, title, description, date, location, creatorId);
    }

    // Геттеры
    public int getId() {
        return id;
    }

    public String getTitle() {
        return title;
    }

    public String getDescription() {
        return description;
    }

    public LocalDateTime getDate() {
        return date;
    }

    public String getLocation() {
        return location;
    }

    public int getCreatorId() {
        return creatorId;
    }

    // Сеттеры (если нужны)
    public void setId(int id) {
        this.id = id;
    }
}
