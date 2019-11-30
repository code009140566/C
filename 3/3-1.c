#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n=0 ,i=0 ,sum=0;
	
	printf("請輸入N值：");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		
		if(i%2==1){
			sum+=i;
		} 
	}
	printf("到N值之奇數總和為：%d", sum);
	
	system("pause");
	return 0;
}
