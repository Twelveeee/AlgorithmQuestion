	#include <stdio.h>
int main(){
	int n=0,i=0,sum=0,f=1,j=0,comp=0;
	char id[19];
	char com[]={'1','0','X','9','8','7','6','5','4','3','2'};
	int quan[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",id);
		sum=0;
		for(j=0;j<17;j++){
			if(id[j]<'0'||id[j]>'9'){
				f=0;
				printf("%s\n",id);
				break;
			}
			sum=sum+(id[j]-'0')*quan[j];
			if(j==16){
				comp=sum%11;
				if((id[17]-'0')!=(com[comp]-'0')){
					printf("%s\n",id);
					f=0;
				}
			}
		}
	}
		if(f==1){
		printf("All passed");
	}
	return 0;
}