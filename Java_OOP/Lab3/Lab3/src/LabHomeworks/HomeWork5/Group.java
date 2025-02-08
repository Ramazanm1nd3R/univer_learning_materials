package LabHomeworks.HomeWork5;

import java.util.ArrayList;

public class Group {
    private String name;
    private Tourist[] tourists;

    public Group(String name, Tourist[] tourists) {
        this.name = name;
        this.tourists = tourists;
    }

    public String canGoToExpedition() {
        int totalMoney = 0;

        for (Tourist tourist : tourists) {
            if (tourist.getAccess().equalsIgnoreCase("YES")){
                totalMoney += tourist.getMoney();
            }
        }
        return totalMoney > 20000 ? "YES" : "NO";
    }

    public String getName() {
        return name;
    }
}
