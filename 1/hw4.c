#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int stdID=0, age=0;
	char stdLname[10];
	char stdName[10];
	
	printf("�п�J�A���Ǹ��G");
	scanf("%d", &stdID);
	
	printf("�п�J�A���~�֡G");
	scanf("%d", &age);
	
	printf("�п�J�A���m��G");
	scanf("%s", &stdLname);
	
	printf("�п�J�A���W�١G");
	scanf("%s", &stdName);
	
	printf("�Ǹ��G%d\n�m�W�G%s%s\n�~�֡G%d\n", stdID, stdLname, stdName, age);
	
	system("pause");
	return 0;
	
} 
