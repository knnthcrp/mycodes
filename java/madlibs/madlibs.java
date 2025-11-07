package java.madlibs;
import java.util.Scanner;
public class madlibs {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String adjective1, adjective2,adjective3 , noun, verb;

        System.out.print("Enter an Adjective: ");
        adjective1 = scn.nextLine();

        System.out.print("Enter a Name: ");
        noun = scn.nextLine();

        System.out.print("Enter an Adjective: ");
        adjective2 = scn.nextLine();

        System.out.print("Enter a Verb: ");
        verb = scn.nextLine();

        System.out.print("Enter an Adjective:");
        adjective3 = scn.nextLine();

        System.out.println("\nThis is your MadLib!\n");

        System.out.println("Today I went to a " + adjective1 + " zoo.");
        System.out.println("In an exhibit, I saw a " + noun);
        System.out.println(noun + " was " + adjective2 + " and " + verb);
        System.out.println("I was " + adjective3);
        








        
    }
}
