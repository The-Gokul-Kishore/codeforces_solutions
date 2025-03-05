import java.util.*;

public class bhuvi_adjsum {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0){
            int x = sc.nextInt();
            int y = sc.nextInt();
            if(y-x==1){
                System.out.println("YES");
            }else{
                int temp = y;
                while(true){
                    y *= 10;
                    temp = y-1;
                    if(sum(temp,x) || temp==x){
                        break;
                    }
                }
                if(sum(temp,x) || temp==x){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
            }
        }
    }
    public static boolean sum(int temp,int x){
        int sum = 0;
        while(temp>0){
            sum += temp%10;
            temp /= 10;
        }
        return sum==x;
    }
}
