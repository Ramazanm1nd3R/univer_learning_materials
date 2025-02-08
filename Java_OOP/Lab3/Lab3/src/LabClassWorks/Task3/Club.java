package LabClassWorks.Task3;

public class Club {
    private String name;
    private Player[] players;

    public Club() {
    }

    public Club(String name, Player[] players) {
        this.name = name;
        this.players = players;
    }

    public void printClubData() {
        System.out.println("Club: " + name);
        System.out.println("Players:");
        for (Player player : players) {
            System.out.println(player.getPlayerData());
        }
    }

    public void printSquad() {
        System.out.println("Available Squad for " + name + ":");
        for (Player player : players) {
            if (!player.isInjured()) {
                System.out.println(player.getNumber() + " " + player.getName() + " " + player.getPosition());
            }
        }
    }
}
