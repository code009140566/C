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

	printf("�ǥͤH�ơG");
	scanf("%d",&num);
	
	ptr=(struct student *)malloc(num*sizeof(struct student));
	
	for(i=0;i<num;i++){
		fflush(stdin);
		printf("��%d��ǥ�\n\n",i+1);
		printf("�п�J�m�W:");
		gets((ptr+i)->name);
		 
		printf("�п�J�~��:");
		scanf("%d", &(ptr+i)->age);
		
		printf("�п�J���Z:");
		scanf("%lf", &(ptr+i)->grade);
	}
	printf("\n\n");
	
	for(i=0;i<num;i++){
		printf("�m�W:%s\n�~��:%d\n����:%.2f",(ptr+i)->name,(ptr+i)->age,(ptr+i)->grade);
		printf("\n\n");
	}
} 
