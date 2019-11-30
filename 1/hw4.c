#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int stdID=0, age=0;
	char stdLname[10];
	char stdName[10];
	
	printf("請輸入你的學號：");
	scanf("%d", &stdID);
	
	printf("請輸入你的年齡：");
	scanf("%d", &age);
	
	printf("請輸入你的姓氏：");
	scanf("%s", &stdLname);
	
	printf("請輸入你的名稱：");
	scanf("%s", &stdName);
	
	printf("學號：%d\n姓名：%s%s\n年齡：%d\n", stdID, stdLname, stdName, age);
	
	system("pause");
	return 0;
	
} 
