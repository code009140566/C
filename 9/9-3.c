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
	
	printf("�ǥͤH��:");
	scanf("%d",&num);
		
	for(i=0;i<num;i++){
		current=(NODE *) malloc(sizeof(NODE));
		printf("��%d��ǥ�\n\n",i+1);
		printf("�п�J�m�W:");
		scanf("%s", &(current->name));
		printf("�п�J�~��:");
		scanf("%d", &(current->age));
		printf("�п�J���Z:");
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
		printf("�m�W:%s \n",current->name); 
		printf("�~��:%d \n",current->age);
		printf("����:%.2f \n",current->grade);
		printf("next address = %p\n\n",current->next);
		current=current->next;
	}
	
	system("pause");
	return 0;
} 
