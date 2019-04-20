import java.util.Scanner;

public class Driver{
    public static void main(String[] args) {
        Game ac = new ActionGame("Assains Creed", "Ubisoft", 7.6, 1, "Altair");
        Game sg = new StrategyGame("Dota", "Valve Operation", 9, "Online multiplayer base strategy game");
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter rating for Assains Creed: ");
        try{
            ac.changeRating(sc.nextDouble());    
        }catch(ArithmeticException ex){
            System.out.println(ex.getMessage());
            ex.printStackTrace();
        }
        

        System.out.println("Enter rating for Dota: ");
        try{
            sg.changeRating(sc.nextDouble());    
        }catch(ArithmeticException ex){
            System.out.println(ex.getMessage());
            ex.printStackTrace();
        }

        sc.close();
        

        System.out.println(ac.toString());
        System.out.println(sg.toString());
    }
}