#include <stdio.h>
#include <stdlib.h>

void arrmaxmin(int arr[], int *max, int *maxidx, int *min, int *minidx);

int main(){
	int num[5];
	int i=0;
	int max=0,maxidx=0,min=0,minidx=0;

	for(i=0;i<5;i++){
		printf("�п�J%d�ӭȡG",i+1);
		scanf("%d",&num[i]);
	}
	
	arrmaxmin(num,&max,&maxidx,&min,&minidx);
	printf("�̤j�Ȭ��G%d�A���ޭȬ��G%d\n�̤p�Ȭ��G%d�A���ޭȬ��G%d\n",max,maxidx,min,minidx);
	
	system("pause");
	return 0;
} 

void arrmaxmin(int arr[], int *max, int *maxidx, int *min, int *minidx){
	int i=0;
	*max=0,*min=2147483647;
	
	for(i=0;i<5;i++){
		if(*(arr+i)>*max){
			*maxidx=i;
			*max = *(arr+i);
		}else if(*(arr+i)<*min){
			*minidx=i;
			*min=*(arr+i);
		}
	}
}
