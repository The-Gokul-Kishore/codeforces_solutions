import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            int ans = 0;
            int vis[] = new int[n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i != j && vis[i] == 0 && vis[j] == 0 && arr[i] + arr[j] == k) {
                        vis[i] = 1;
                        vis[j] = 1;
                        ans++;
                    }
                }
            }
            System.out.println(ans);
        }
    }
}