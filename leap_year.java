//6. Check if a year is a leap year.
import java.util.Scanner;
class Leap {
    public static void main (String[] args) {
        System.out.print("Enter a Year : ");
        Scanner input = new Scanner(System.in);
        int year = input.nextInt();
        if((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))){
            System.out.println(year + " is a Leap Year ! Hurrah !!!");
        }
        else{
            System.out.println(year + " is not a Leap Year ");
        }
    }
}