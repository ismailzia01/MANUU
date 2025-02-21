public class maxoftwo {
    public static void main(String[] args) {
        //taking values as command line argument 
        //and typecasting it form string to int 
        int num1 = Integer.parseInt(args[0]);
        int num2 = Integer.parseInt(args[1]);
        if(num1>num2)
            System.out.println(num1 + " is greater than " + num2);
        else
            System.out.println(num2 + " is greater than " + num1);
    }
}
