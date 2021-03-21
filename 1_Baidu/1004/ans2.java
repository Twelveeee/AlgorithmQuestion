 package p1004;
/**
* @author ChenTengFeng
* @email Twelveeee12@gmail.com  
* @time Feb 18, 2021
*/
 
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n,m;
        long ans = 0;
        long p ;
        String[] input = in.nextLine().split(" ");
        in.close();
        n= Integer.parseInt(input[0]);
        m = Integer.parseInt(input[1]);
        p = Long.parseLong(input[2]);
        if(m<n) {
            int temp = m;
            m = n;
            n = temp;
        }
        
        long[] fibonacci = new long[m+1];
        long[] fibonacciLike = new long[m+1];
        fibonacci[0]=0;
        fibonacci[1]=1;
        fibonacciLike[0]=0;
        fibonacciLike[1]=1;
        for(int i = 2;i<=m;i++) {
            fibonacci[i]= fibonacci[i-1]+fibonacci[i-2];
            fibonacciLike[i]=fibonacciLike[i-1]+fibonacci[i];
        }
        for(int i = n;i<=m;i++) {
            ans +=fibonacciLike[i];
            //System.out.println(i+":\t"+ans);
        }
        
        System.out.println(Math.floorMod(ans,p));
    }
}