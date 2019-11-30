#include <stdio.h>
#include <stdlib.h>

int GetMax(int x, int y, int z);
int sum(int x, int y, int z, int sum);
double average(int x, int y, int z, double avg);

int main(){
	
	int x, y, z, sum3, avg=0;
	
	printf("輸入三值：");
	scanf("%D%D%D",&x ,&y ,&z);
	
	GetMax(x, y, z);
	sum(x, y, z, sum3);
	average(x, y, z, avg);
	
	system("pause");
	return 0;
}

int GetMax(int x, int y, int z){
	if(x>y){
		if(x>z){
			printf("x為最大值\n");
		}
	}
	if(y>x){
		if(y>z){
			printf("x為最大值\n");
		}
	}
		if(z>x){
		if(z>y){
			printf("x為最大值\n");
		}
	}
}


int sum(int x, int y, int z, int sum3){
	sum3=x+y+z;
	printf("總和為%d\n", sum3);
}

double average(int x, int y, int z, double avg){
	avg=(x+y+z)/3;
	printf("平均為%f\n", avg);
}

