#include <stdio.h>
#include <stdlib.h>

void reverse(char str[]);

int main(){

	char str[1000];
	
	printf("��J�ഫ�r��:"); 
	scanf("%s",&str);
	reverse(str);
	printf("\n");
	
	system("pause");	 
	return 0;
}

void reverse(char str[]){
	int i=0,j;

	do{
		i++;
	}while(str[i]!='\0');

	printf("�ഫ�᪺�r��:");

	for(j=i-1;j>=0;j--){
		printf("%c",str[j]);
	}
}
