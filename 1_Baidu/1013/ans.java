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
        int ans=0;// ���ʹ���
        int curr =0; //��ǰλ��
        d = in.nextInt();// ����
        m = in.nextInt();// ����γ���
        n = in.nextInt();// ����վ����
        int[] pos = new int[n+2]; //����վλ��
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