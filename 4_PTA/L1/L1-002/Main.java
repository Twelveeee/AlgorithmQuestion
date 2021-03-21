import java.util.Scanner;

public class Main{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int num = sc.nextInt();
String biu = sc.nextLine();

int x,y=0;
num--;
int f=1;
int i,j;
for(i=2;;i++) {
	if(num>(2*i-1)*2) {
		num-=(2*i-1)*2;
		f++;
}else {
	break;
}}
	
	for(i=f;i>0;i--) {
		for(j=f-i;j>0;j--) {
			System.out.print(" ");
		}
		for(j=0;j<(2*i-1);j++) {
			System.out.print(biu+"");
		}
		System.out.println();
	}
	for(i=2;i<=f;i++) {
		for(j=f-i;j>0;j--) {
			System.out.print(" ");
		}
		for(j=0;j<(2*i-1);j++) {
			System.out.print(biu);
		}
		System.out.println();
	}
	System.out.println(num);
}
}