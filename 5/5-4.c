#include <stdio.h>
#include <stdlib.h>

void reverse(char str[]);

int main(){

	char str[1000];
	
	printf("輸入轉換字串:"); 
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

	printf("轉換後的字串:");

	for(j=i-1;j>=0;j--){
		printf("%c",str[j]);
	}
}
