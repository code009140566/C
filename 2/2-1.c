#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int mile=0;
	float Kmile=0;
	
	printf("輸入英哩：");
	scanf("%d", &mile);
	
	Kmile=mile*1.6;
	
	printf("%d英哩為%f公里",mile, Kmile);
	
	system("pause");
	return 0;
	
}

