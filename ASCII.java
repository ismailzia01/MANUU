public class ASCII {
    public static void main(String[] args) {
        char[] characters = {'A', 'B', 'C', 'D', 'a', 'b', 'c', 'd', '0', '1', '2', '$', '#', '@'};
        for(char c : characters) {
            int asciivalue = (int) c;
            System.out.println("Character : " + c + ", ASCII value : " + asciivalue);
        }
    }
    
}
