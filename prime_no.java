import java.util.Scanner;
class Prime {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = input.nextInt();
        boolean isPrime = true;
        for(int i = 2; i < num/2; i++) {
            if(num%i == 0 ){
                isPrime = false;
                break;
            }
        }
        System.out.println(isPrime ? "Prime" : "Not Prime");
    }
}