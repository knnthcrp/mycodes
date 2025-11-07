import java.util.Scanner;

public class calculator{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num1, num2;
        String op, choice;



        do {
            System.out.print("Please enter the first number: ");
            num1 = scan.nextInt();

            System.out.print("Please enter your desired operator: ");
            op = scan.next();

            System.out.print("Please enter the second number: ");
            num2 = scan.nextInt();

            if (op.equals("+")) {
                System.out.println("The answer is: " + (num1 + num2));
            } else if (op.equals("-")) {
                System.out.println("The answer is: " + (num1 - num2));
            } else if (op.equals("*")) {
                System.out.println("The answer is: " + (num1 * num2));
            } else if (op.equals("/")) {
                System.out.println("The answer is: " + (num1 / num2));
                if (num2 == 0) {
                    System.out.println("Syntax error");
                }
            } else {
                System.out.println("Invalid Operator");
            }

            System.out.print("Do you want to make another calculation? y/n ");
            choice = scan.next();
        }while(choice.equals("y"));
        


    }
}
