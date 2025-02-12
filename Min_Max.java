//12. Find the largest and smallest elements in an array.
class MinMax {
    public static void main (String[] args){
        int[] arr = {3, 6, 54, 56, 34, 556, 87, 95};
        int min = arr[0];
        int max = arr[0];
        for(int i = 0; i < arr.length; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        System.out.println("Minimum = " + min + " Maximum = " + max);
    }
}