package model;

import java.io.Serializable;
import java.util.Date;

public class MessageData implements Serializable {
    private String userName;
    private String messageText;
    private Date sentDate;

    public MessageData() {}

    public MessageData(String userName, String messageText, Date sentDate) {
        this.userName = userName;
        this.messageText = messageText;
        this.sentDate = sentDate;
    }

    public String getUserName() {
        return userName;
    }

    public String getMessageText() {
        return messageText;
    }

    public Date getSentDate() {
        return sentDate;
    }

    @Override
    public String toString() {
        return "\"" + messageText + "\" from " + userName + " at " + sentDate;
    }
}
