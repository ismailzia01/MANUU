class Even {
    public static void main (String[] args) {
        System.out.println("Even Numbers from 2 to 100 ");
        for(int i = 2; i <= 100; i=i+2) {
            System.out.print(i + ", ");
        }
        System.out.println("Even Numbers from 100 to 2 ");
        for(int i = 100; i >= 2; i = i-2) {
            System.out.print(i + ", ");
        }
    }
}