//13. Reverse an array.
import java.util.Scanner;
class RevArr {
    public static void main(String[] args) {
        System.out.print("Enter no of Elements  : ");
        Scanner size = new Scanner(System.in);
        int n = size.nextInt();
        System.out.print("Enter " + size + " elements of the array : ");
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = size.nextInt();
        }
        System.out.print("Elements : ");
        for(int i = 0; i < n; i++) {
            System.out.print(arr[i] + "\t");
        }
        System.err.println();
        System.out.print("Reversed : ");
        int temp;
        for(int i = 0; i <= n/2; i++) {
            temp = arr[i];
            arr[i] = arr[n-1-i];
            arr[n-1-i] = temp;
        }
        for(int i = 0; i < n; i++) {
            System.out.print(arr[i] + "\t");
        }
        
    }
}