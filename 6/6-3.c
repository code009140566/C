#include<stdio.h>
#include<stdlib.h>

void display(char *ptr, int n);

int main(){
	char ptr[99];
	int n=0;

	printf("�п�J�r��G");
	scanf("%s",&ptr);
	
	printf("�п�J�q���Ӧr�}�l��ܡG");
	scanf("%d",&n);
	
	display(ptr,n);
	
	system("pause");
	return 0;
}

display(char *ptr, int n){
	printf("%s\n",ptr+n-1);
}
