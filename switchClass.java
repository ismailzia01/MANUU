import java.util.Scanner;

public class switchClass {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int choice;
        do {
            System.out.println("1) Sunday");
            System.out.println("2) Monday");
            System.out.println("3) Tuesday");
            System.out.println("4) Wednesday");
            System.out.println("5) Thursday");
            System.out.println("6) Friday");
            System.out.println("7) Saturday");
            System.out.println("8) Exit");
            System.out.print("Enter your choice : ");
            choice = input.nextInt();

            switch (choice) {
                case 1 -> System.out.println("Sunday");
                case 2 -> System.out.println("Monday");
                case 3 -> System.out.println("Tuesday");
                case 4 -> System.out.println("Wednesday");
                case 5 -> System.out.println("Thursday");
                case 6 -> System.out.println("Friday");
                case 7 -> System.out.println("Saturday");
                case 8 -> System.out.println("Exiting...!");
                default -> System.out.println("Invalid Choice ");
            }
        } while (choice != 8);

        input.close();
    }
}
