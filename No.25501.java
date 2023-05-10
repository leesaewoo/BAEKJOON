import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = Integer.parseInt(scanner.nextLine());

        for(int i = 0 ; i < T ; i++) {
            String s = scanner.nextLine();
            isPalindrome(s);
        }
    }

    public static void isPalindrome(String s) {
        recursion(s, 0, s.length() - 1, 1);
    }

    public static void recursion(String s, int l, int r, int count) {
        if(l >= r) {
            System.out.println(1 + " " + count);
        }
        else if(s.charAt(l) != s.charAt(r)) {
            System.out.println(0 + " " + count);
        }
        else {
            recursion(s, l + 1, r - 1, count + 1);
        }
    }
}
