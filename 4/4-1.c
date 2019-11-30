#include <stdio.h>
#include <stdlib.h>

int sum(int n);

int main(){
	int n=0;
	printf("¿é¤Jn­È¡G");
	scanf("%d",&n);
	printf("sum(%d)=%d\n",n ,sum(n));
	
	system("pause");
	return 0;
}

int sum(int n){
	
	if(n==1){	
		return 2;		
	}else{
		return sum(n-1)+2*n;
	}
} 
