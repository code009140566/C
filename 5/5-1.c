#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double arr[5],sum=0,max=0,mid=0,min=0;
	int i;
	
	for(i=0;i<=4;i++){
		printf("��J���ӯB�I�ƭ�(�ѤU%d):", 5-i);
		scanf("%lf",&arr[i]);

	}
			
	for(i=0;i<=4;i++){
		
		if(arr[i]>max){	
			mid = max;
			max =arr[i];
		}else if(arr[i]>mid){
			mid = arr[i];
		}
	}
	printf("�̤j�Ȭ�%lf\n",max);
	
	min=arr[1];
	for(i=0;i<=4;i++){
		
		if(arr[i]>max){	
			max =arr[i];
		}
		
		if(arr[i]<min){
			min=arr[i];
		}
			
	}	
	printf("�̤p�Ȭ�%lf\n",min);
	
	for(i=0;i<=4;i++){
		sum+=arr[i];
	}
	sum=sum/5;
	printf("������%lf\n",sum);
	
	system("pause");
	return 0;
}

