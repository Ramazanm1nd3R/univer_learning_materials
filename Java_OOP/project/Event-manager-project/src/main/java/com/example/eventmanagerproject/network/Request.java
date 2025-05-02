package com.example.eventmanagerproject.network;

import java.io.Serializable;

public class Request implements Serializable {
    private String type; // "REGISTER", "LOGIN", "CREATE_EVENT", etc.
    private Object payload;

    public Request(String type, Object payload) {
        this.type = type;
        this.payload = payload;
    }

    public String getType() { return type; }
    public Object getPayload() { return payload; }
}
