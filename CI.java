import java.util.Scanner;
public class CI {
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       System.out.print("Enter the value of Principle : ");
       double p = input.nextDouble();
       System.out.print("Enter the value of rate : ");
       double r = input.nextDouble();
       System.out.print("Enter the value of time : ");
       double t = input.nextDouble();
       double cp = p*(Math.pow(1+r/100, t));
       System.out.println("Compount Interest is  : " + cp);
       input.close();
    }
}