#include <stdio.h>
#include <stdlib.h>

void count(int *arr);

int main(){
	
	int num[6];
	int i=0;
	
	printf("�п�J�}�C��ơG\n");
	for(i=0;i<6;i++){
		scanf("%d",&num[i]);
	}
	
	count(num);
	
	system("pause");
	return 0;
} 

void count(int *arr){
	int i=0;
	int EveNum=0 , OddNum=0;
	
	for(i=0;i<6;i++){
		if(*(arr+i)%2==0){
			EveNum+=1;
		}else{
			OddNum+=1;
		} 
		
	}
	
	printf("�_�Ʀ��G%d�ӡA���Ʀ��G%d��\n",OddNum,EveNum);
}
