import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str = in.next();
        in.close();
        
        int curr = 0;
        int anchor = 0;
        
        for(curr=0;curr<str.length();curr++) {
            if(curr+1 == str.length()||str.charAt(curr+1)!=str.charAt(anchor)) {
                System.out.print(str.charAt(anchor));
                if(curr > anchor) {
                    if(curr-anchor+1 ==2)System.out.print(str.charAt(curr));
                    if(curr-anchor+1 >2)System.out.print(String.valueOf(curr-anchor+1));
                }
                anchor = curr +1;
            };
        }
        
        System.out.println();
        
    }

}
