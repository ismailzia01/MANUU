//14. Check if an array is sorted.
//This Program is not Correct 
import java.util.Arrays;
import java.util.Scanner;
class Sort {
    public static void main (String[] args) {
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
        int[] temparr = new int[n];
        for(int i = 0; i < n; i++){
            temparr[i] = arr[i];
        }
        int flag = 0;
        Arrays.sort(arr);
        for(int i = 0; i < n; i++){
            if(temparr[i] != arr[i]){
                flag = 1;
            }
        }
        if(flag == 0){
            System.out.println("The Array is sorted ");
        }
        else if(flag == 1) {
            System.out.println("The array is not sorted ");
        }

        
        
    }
}