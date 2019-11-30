#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sum=0,n=0,i=0;
	printf("¿é¤Jn­È¡G");
	scanf("%d",&n);
	i=n;
	
	if(n==1){
		sum=2;
	}else{
		while(i>=0){
			sum+=2*i;
			i--;
		}
	}
	
	printf("sum(%d)=%d\n",n,sum);
	
	system("pause");
	return 0;
}
