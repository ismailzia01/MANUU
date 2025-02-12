import java.util.Scanner;
class Divisor {
    public static void main (String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = input.nextInt();
        int sum = 0;
        for(int i = 1; i <= num/2; i++) {
            if((num%i)==0){
                System.out.print(i + " + ");
                sum += i;
            }
        }
        System.out.println(" = " + sum);
    }
}