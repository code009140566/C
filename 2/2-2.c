#include <stdlib.h>
#include <stdio.h>

int main(){
	
	float mile=0;
	float Kmile=0;
	
	printf("��J�����G");
	scanf("%f", &Kmile);
	
	mile=Kmile*0.625;
	
	printf("%f������%f�^��",Kmile, mile);
	
	system("pause");
	return 0;
	
}

