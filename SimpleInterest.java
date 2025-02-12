import java.util.Scanner;
public class SimpleInterest {
    public static void main (String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of Principle : ");
        double p = input.nextDouble();
        System.out.print("Enter the value of rate : ");
        double r = input.nextDouble();
        System.out.print("Enter the value of time : ");
        double t = input.nextDouble();
        double SI = (p*r*t)/100;
        System.out.println("The Simple Interest is : " + SI);
        input.close();
    }
}