#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double arr[5],sum=0,max=0,mid=0,min=0;
	int i;
	
	for(i=0;i<=4;i++){
		printf("輸入五個浮點數值(剩下%d):", 5-i);
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
	printf("最大值為%lf\n",max);
	
	min=arr[1];
	for(i=0;i<=4;i++){
		
		if(arr[i]>max){	
			max =arr[i];
		}
		
		if(arr[i]<min){
			min=arr[i];
		}
			
	}	
	printf("最小值為%lf\n",min);
	
	for(i=0;i<=4;i++){
		sum+=arr[i];
	}
	sum=sum/5;
	printf("平均為%lf\n",sum);
	
	system("pause");
	return 0;
}

