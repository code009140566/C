#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("�P���	���~A	���~B	���~C	���~D	���~E\n");
	
    int i,j,s;
    int max= 0;
	int mid= 0;
	int maxOne=0;
	int arrSeller[3][6] = {{1,33,32,56,45,33,},{2,77,33,68,45,23,},{3,43,55,43,67,65}};
	int arrPrice[5] = {12,16,10,14,15};
	char arrProduct[5] = {'A','B','C','D','E'};
	int arrSellerSum[3] = {0,0,0};
	int arrProductSum[5] = {0,0,0,0,0};
	
	for(i=0;i<=2;i++){
	
		for(j=0;j<=5;j++){
			printf("%d\t",arrSeller[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<=2;i++){
		for(j=1;j<=5;j++){
			arrSellerSum[i]+=arrSeller[i][j]*arrPrice[j-1];
		}
		printf("%d���P������`�P���B�G%d\n",arrSeller[i][0],arrSellerSum[i]);
	}
	printf("\n");
	
	for(j=1;j<=5;j++){
		for(i=0;i<=2;i++){
			arrProductSum[j-1]+=arrSeller[i][j]*arrPrice[j-1];
		}
		printf("%c���~��%d\n",arrProduct[j-1],arrProductSum[j-1]);
	}
	printf("\n");
	
	for(s=0;s<3;s++){
	
		if(arrSellerSum[s]>max){
		mid = max;
		max =arrSellerSum[s];
		}
	}
	for(s=0;s<3;s++){
		if(max==arrSellerSum[s]){
			maxOne=s;
		}
	}
	printf("�̰��B�P�����%d��\n", arrSeller[maxOne][0]);

	for(s=0;s<5;s++){
	
		if(arrProductSum[s]>max){
		mid = max;
		max =arrProductSum[s];
		}
	}
	for(s=0;s<3;s++){
		if(max==arrProductSum[s]){
			maxOne=s;
		}
	}
	printf("�̰��B�P�ⲣ�~�����~%c\n", arrProduct[maxOne]);	
}

