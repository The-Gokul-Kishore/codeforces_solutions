import java.util.*;
import java.lang.*;
import java.io.*;

class bhuvi2
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int test = sc.nextInt();
		while(test-->0){
		    int n = sc.nextInt();
		    int p = sc.nextInt();
		    float[] arr = new float[n];
		    for(int i=0;i<n;i++){
		        arr[i] = sc.nextFloat();
		    }
		    int[] ans = new int[n];
		    Arrays.fill(ans,Integer.MAX_VALUE);
		    int max = Integer.MIN_VALUE;
		    boolean found = false;
		    for(int i=0;i<n;i++){
		        if((int)arr[i]==0){
		            max = Integer.MIN_VALUE;
		            found = true;
		            ans[i] = 0;
		        }else if(found){
		            max = Math.max(max,(int)Math.ceil(arr[i]/p));
		            ans[i] = Math.min(ans[i],max);
		        }
		    }
		    max = Integer.MIN_VALUE;
		    found = false;
		    for(int i=n-1;i>=0;i--){
		        if((int)arr[i]==0){
		            max = Integer.MIN_VALUE;
		            found = true;
		            ans[i] = 0;
		        }else if(found){
		            max = Math.max(max,(int)Math.ceil(arr[i]/p));
		            ans[i] = Math.min(ans[i],max);
		        }
		    }
		    for(int i=0;i<n;i++){
		        System.out.print(ans[i]+" ");
		    }
		    System.out.println();
		}

	}
}
