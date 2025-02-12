//11. Find the sum of elements in an array.
class Sum {
    public static void main (String[] args) {
        int[] myNum = {2, 5, 6, 6, 9};
        int sum = 0;
        for(int i = 0; i < myNum.length; i++) {
            sum += myNum[i];
        }
        System.out.println("Sum = " + sum);
    }
}