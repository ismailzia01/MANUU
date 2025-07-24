pppublic class BreakContinue {
    public static void main(String[] args) {
        System.out.println("Demonstration of Continue and Break Statements ");
        for (int i = 1; i <= 10; i++) {

            if (i == 3)
                continue;
            System.out.print(i + " ");
            if (i == 5)
                break;
        }
        System.out.println("Succesfully Executed !");
        //Program ends
    }
}
