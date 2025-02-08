package LabClassWorks.Task3;

public class MainTask3 {
    public static void main(String[] args) {
        Player[] players = {
                new Player("Neuer", "GK", 1, false),
                new Player("Carvajal", "RB", 2, false),
                new Player("Ramos", "CDF", 4, true),
                new Player("Kante", "CB", 6, false),
                new Player("Griezmann", "FWD", 7, false)
        };

        Club club = new Club("IITU Team", players);

        club.printClubData();//club data

        System.out.println();
        club.printSquad(); // available players
    }
}
