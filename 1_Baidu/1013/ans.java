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
        int d,m,n; 
        int ans=0;// 加油次数
        int curr =0; //当前位置
        d = in.nextInt();// 距离
        m = in.nextInt();// 最长单次车程
        n = in.nextInt();// 加油站数量
        int[] pos = new int[n+2]; //加油站位置
        pos[0]=0;
        for(int i =1;i<n+1;i++) {
            pos[i]= in.nextInt();
        }
        pos[n+1]=d;
        
        for(int i =0;i<n+2;i++) {
            if(pos[i]-curr <= m) {
                continue;
            }else {
                if(pos[i-1]+m<pos[i]) {
                  System.out.println("-1");
                  return ;
                }else {
                  ans ++;
                  curr = pos[i-1];
                  continue;
                }
               
            }
        }
        System.out.println(ans);
        
    }

}