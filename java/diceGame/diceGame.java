
import java.util.Scanner;
import java.util.Random;

public class diceGame {
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        Random random = new Random();

        int dice, guess;
        dice = random.nextInt(1, 7);


        System.out.print("\n===== DICE GUESSING GAME =====\n");

        System.out.println("Enter your guess: ");
        guess = scn.nextInt();

        if (guess == dice) {
            System.out.println("Correct! the number is " + dice);
        }
        else {
            System.out.println("Wrong! the number is " + dice);
        }


    }
}
