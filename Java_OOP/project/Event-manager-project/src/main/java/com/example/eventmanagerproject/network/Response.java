package com.example.eventmanagerproject.network;

import java.io.Serializable;

public class Response implements Serializable {
    private boolean success;
    private Object payload;
    private String message;

    public Response(boolean success, Object payload, String message) {
        this.success = success;
        this.payload = payload;
        this.message = message;
    }

    public boolean isSuccess() { return success; }
    public Object getPayload() { return payload; }
    public String getMessage() { return message; }
}