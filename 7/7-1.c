#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[10];
	int age;
	float grade;
};

int main(){
	int i;
	struct student S[3];
	
	for(i=0;i<3;i++){
		printf("��J��%d��ǥ͸��(�m�W�B�~�֦��Z)�G\n",i+1);
		scanf("%s",&S[i].name);
		scanf("%d",&S[i].age);
		scanf("%f",&S[i].grade);
	}
	
	printf("�m�W\t�~��\t���Z\n");
	for(i=0;i<3;i++){
		printf("%s\t%d\t%.2f\n",S[i].name,S[i].age,S[i].grade);
	}
	
	system("pause");
	return 0;
} 
