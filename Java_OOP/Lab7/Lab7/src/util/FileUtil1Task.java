package util;

import model.User;
import java.io.*;
import java.util.ArrayList;

public class FileUtil1Task {
    private static final String FILE_NAME = "memory.txt";

    public static ArrayList<User> getUsersList() {
        ArrayList<User> users = new ArrayList<>();

        try (BufferedReader br = new BufferedReader(new FileReader(FILE_NAME))){
            String line;
            while ((line = br.readLine()) != null){
                users.add(User.fromString(line));
            }
        }catch (IOException e){
            System.out.println("file not found");
        }

        return users;
    }

    public static void saveUsersList(ArrayList<User> users) {
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(FILE_NAME))){
            for (User user : users){
                bw.write(user.toString());
                bw.newLine();
            }
        }catch (IOException e){
            System.out.println("user list build error");
        }
    }
}
