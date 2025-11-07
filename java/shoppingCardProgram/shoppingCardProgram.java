
import  java.util.Scanner;

public class shoppingCardProgram{
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        String product;
        double price, quantity;
        double total;

        System.out.print("What do you want to buy? ");
        product = scn.nextLine();

        System.out.print("What is the price of the product? ");
        price = scn.nextDouble();
        
        System.out.print("How many would you like?");
        quantity = scn.nextDouble();

        total = price * quantity;
        System.out.println("You have bought" + quantity + " "+ product + "/s" );
        System.out.println("Your total is " + total + " pesos" );

    }
}