 import java.util.Scanner;
 class Pattern {
    public static void main(String[] args) {
        Scanner input = new Scanner((System.in));
        System.out.print("Enter the Size : ");
        int size = input.nextInt();
        for(int i=1; i<=size; i++) {
            int count=1;
            for(int j=1; j<=size-i+1; j++) {
                System.out.print(count + " ");
                count++;
            }
            for(int  j=1; j<=2*i-2; j++) {
                System.out.print("*" + " ");
            }
            for(int j=size-i+1; j>0; j--) {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
 }