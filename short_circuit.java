class Circuit {
    public static void main(String[] args) {
        int a = 5, b = 3;
        int incr = 0;
        incr = (a < b) && (a > b++);
        System.out.println(incr);
        System.out.println(b);
    }
}