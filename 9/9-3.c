#include <stdio.h>
#include <stdlib.h>
struct student{
	char name[10];
	int age;
	double grade;
	struct student *next;
};
typedef struct student NODE;

int main(){
	int num=0,i,val;
	NODE *first,*current,*previous;
	
	printf("學生人數:");
	scanf("%d",&num);
		
	for(i=0;i<num;i++){
		current=(NODE *) malloc(sizeof(NODE));
		printf("第%d位學生\n\n",i+1);
		printf("請輸入姓名:");
		scanf("%s", &(current->name));
		printf("請輸入年齡:");
		scanf("%d", &(current->age));
		printf("請輸入成績:");
		scanf("%lf", &(current->grade));
		
		if(i==0){
			first =current;
		}else{
			previous->next=current;
		}
		current->next=NULL;
		previous=current;
	}
	current=first;
	printf("\n\n");
	
	while (current!=NULL){
		printf("address = %p\n",current);
		printf("姓名:%s \n",current->name); 
		printf("年齡:%d \n",current->age);
		printf("分數:%.2f \n",current->grade);
		printf("next address = %p\n\n",current->next);
		current=current->next;
	}
	
	system("pause");
	return 0;
} 
