#include <stdio.h>
#include <stdlib.h>

void count(int arr[]);

int main(){
	
	int i, arr[6];
	
	for(i=1 ; i<=6 ; i++ ){
		
		printf("��J�}�C�ƭ�(�ѤU%d):", 7-i);
		scanf("%d",&arr[i]);
		
	}
	count(arr);
} 

void count(int arr[]){
	int a,b=0,i;
	
	for(i=1 ; i<=6 ; i++ ){
		
		if(arr[i]%2==1){
			a+=1;
			printf("%d�O�_��\n", arr[i]);
		}else if(arr[i]%2==0){
			b+=1;
			printf("%d�O����\n", arr[i]);	
		}else if(arr[i]==1||arr[i]==-1){
			a+=1;
			printf("%d�O�_��\n", arr[i]);
		}
		
	}
	printf("�_�Ʀ�%d�A���Ʀ�%d\n", a,b);
}
