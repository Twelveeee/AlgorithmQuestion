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
        

        if(n<2&&m!=0) {
            ans +=1;
        }
        if(m==0) {
            ans = 0;
        }
        long preTwo = 0;
        long preOne = 1;
        long now ;
        
        for(int i = 2;i<=m;i++) {
            now = preOne+preTwo + 1;
            if(i>=n) {
                ans +=now; 
//                System.out.println(ans);
            }
            
            preTwo = preOne;
            preOne = now ; 
        }
        
        System.out.println(Math.floorMod(ans,p));
    }
}