//16. Reverse a string without using built-in functions.
import java.util.Scanner;
class Rev {
    public static void main(String[] args) {
        System.out.print("Enter a your name : ");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        char temp = z;
        for(int i = 0; i < name.length/2; i++) {
            temp = name[i];
            name[i] = name[i-1-name.length];
            name[name.length-1-i] = temp;
        }
        System.out.println(name);
    }
}