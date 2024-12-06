import java.util.Scanner;

public class cpt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        
        // Process each test case
        while (test-- > 0) {
            int n = sc.nextInt(); // Length of the binary string
            String s = sc.next(); // The binary string itself
            
            // Count the number of ones and zeros
            int oneCount = 0, zeroCount = 0;
            for (char c : s.toCharArray()) {
                if (c == '1') {
                    oneCount++;
                } else {
                    zeroCount++;
                }
            }
            
            // The game is determined by the number of ones:
            // If there's an odd number of ones, Alice wins; otherwise, Bob wins.
            if (oneCount % 2 == 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
