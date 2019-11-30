#include <stdlib.h>
#include <stdio.h>

int main(){
	
	float mile=0;
	float Kmile=0;
	
	printf("輸入公里：");
	scanf("%f", &Kmile);
	
	mile=Kmile*0.625;
	
	printf("%f公里為%f英哩",Kmile, mile);
	
	system("pause");
	return 0;
	
}

