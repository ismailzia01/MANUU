import java.util.Scanner;
public class isPrime {
    public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.print("Enter a Number : ");
    int num = input.nextInt();
    boolean primeNo = false;
    for(int i=2; i<=num/2; i++) {
        if((num%i)==0) {
            primeNo = true;
        }
    }
    if(!primeNo)
        System.out.println(num + " is a Prime Number");
    
    else
        System.out.println(num + " is not a Prime Number");
    }
}
