#include <stdio.h>
#include <stdlib.h>

void count(int *arr);

int main(){
	
	int num[6];
	int i=0;
	
	printf("請輸入陣列資料：\n");
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
	
	printf("奇數有：%d個，偶數有：%d個\n",OddNum,EveNum);
}
