package com.example.eventmanagerproject.network;

import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;

public class ClientSocket {

    public static Response sendRequest(Request request) {
        try (
                Socket socket = new Socket("localhost", 9999);
                ObjectOutputStream out = new ObjectOutputStream(socket.getOutputStream());
                ObjectInputStream in = new ObjectInputStream(socket.getInputStream())
        ) {
            out.writeObject(request);
            return (Response) in.readObject();
        } catch (Exception e) {
            e.printStackTrace();
            return new Response(false, null, "Ошибка подключения к серверу");
        }
    }
}
