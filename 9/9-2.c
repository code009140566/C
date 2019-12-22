#include <stdio.h>
#include <stdlib.h>

int main(){
	int num ,i;
	struct student{
		char name[10];
		int age;
		double grade; 
	}
	*ptr;

	printf("學生人數：");
	scanf("%d",&num);
	
	ptr=(struct student *)malloc(num*sizeof(struct student));
	
	for(i=0;i<num;i++){
		fflush(stdin);
		printf("第%d位學生\n\n",i+1);
		printf("請輸入姓名:");
		gets((ptr+i)->name);
		 
		printf("請輸入年齡:");
		scanf("%d", &(ptr+i)->age);
		
		printf("請輸入成績:");
		scanf("%lf", &(ptr+i)->grade);
	}
	printf("\n\n");
	
	for(i=0;i<num;i++){
		printf("姓名:%s\n年齡:%d\n分數:%.2f",(ptr+i)->name,(ptr+i)->age,(ptr+i)->grade);
		printf("\n\n");
	}
} 
