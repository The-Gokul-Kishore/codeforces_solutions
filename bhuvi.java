import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int test = sc.nextInt();
		while(test-->0){
		    int n = sc.nextInt();
		    int[] arr = new int[n];
		    int sum = 0;
		    for(int i=0;i<n;i++){
		        arr[i] = sc.nextInt();
		        sum += arr[i];
		    }
		    Arrays.sort(arr);
		    int[] post = new int[n];
		    post[n-1] = arr[n-1];
		    for(int i=n-2;i>=0;i--){
		        post[i] += (arr[i]+post[i+1]);
		        sum = Math.max(sum,post[i+1]+((i+1)*(i+1)));
		    }
		    System.out.println(Math.max(sum,n*n));
		    
		}

	}
}