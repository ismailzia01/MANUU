//7. Calculate the grade based on a percentage using `if-else`.
import java.util.Scanner;
class GradeSystem {
    public static void main (String[] args) {
        System.out.print("Enter the percentage : ");
        Scanner input = new Scanner(System.in);
        float per = input.nextFloat();
        if(per > 0 && per < 40) {
            System.out.println("Grade : F");
        }
        else if(per > 40 && per <= 60) {
            System.out.println("Grade : C");
        }
        else if(per >60 && per <= 75) {
            System.out.println("Grade : B");
        }
        else if(per > 75 && per <= 85) {
            System.out.println("Grade : B+");
        }
        else if(per > 85 && per <= 95) {
            System.out.println("Grade : A");
        }
        else {
            System.out.println("Grade : A+");
        }
    }
}