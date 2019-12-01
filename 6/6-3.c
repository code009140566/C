#include<stdio.h>
#include<stdlib.h>

void display(char *ptr, int n);

int main(){
	char ptr[99];
	int n=0;

	printf("請輸入字串：");
	scanf("%s",&ptr);
	
	printf("請輸入從哪個字開始顯示：");
	scanf("%d",&n);
	
	display(ptr,n);
	
	system("pause");
	return 0;
}

display(char *ptr, int n){
	printf("%s\n",ptr+n-1);
}
