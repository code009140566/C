#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n=0 ,i=0 ,sum=0;
	
	printf("�п�JN�ȡG");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		
		if(i%2==1){
			sum+=i;
		} 
	}
	printf("��N�Ȥ��_���`�M���G%d", sum);
	
	system("pause");
	return 0;
}
