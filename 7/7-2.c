#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[10];
	int grade;
}S[5]={"���@",90,"����G",55,"�i�T�P",80,"�B�|",35,"�L��",92};

int main(){
	int max=0,Mnum=0;
	double sum=0;
	int i;

	printf("�m�W\t����\n");
	for(i=0;i<5;i++){
		printf("%s\t%d\t\n",S[i].name,S[i].grade);
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		if(S[i].grade>max){
			max=S[i].grade;
		}
		if(max==S[i].grade){
			Mnum=i;
		}
	}
	printf("�̰������G%s\t%d��\n",S[Mnum].name,S[Mnum].grade);
	
	printf("���ή�G");
	for(i=0;i<5;i++){
		if(S[i].grade<60){
			printf("%s�G%d��\t",S[i].name,S[i].grade); 
		}
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		sum+=S[i].grade;
	}
	printf("����:%.2f��\n",sum/5);
	
	system("pause");
	return 0;
} 
