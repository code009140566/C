#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i=0, n=0, sum = 0;
	
	while(1){
		
		printf("��J�����ƪ�N�ȡG");
		scanf("%d",&n);
		if(n>0&&n%2==0)break;
		
	}
	
	while(i<n){
		
		if(i%2==0){
			sum+=i;
		}
		i++;
	}
		
	printf("�`�M�G%d",sum);
	
	system("pause");
	return 0;
}
