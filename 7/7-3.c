#include<stdio.h>
#include<stdlib.h>

struct data{
	char name[10];
	int grade;
}student[5]={"���@",90,"����G",55,"�i�T�P",80,"�B�|",35,"�L��",92},high;

struct data best(struct data student[]);
void failed(struct data student[]);
double average(struct data student[]); 

int main(){
	int max=0,Mnum=0,sum=0;
	int i;

	printf("�m�W\t����\n");
	for(i=0;i<5;i++){
		printf("%s\t%d\t\n",student[i].name,student[i].grade);
	}
	printf("\n");
	
	high=best(student);
	printf("�̰������G%s\t%d��\n",high.name,high.grade);
	
	failed(student);

	printf("����:%.2f��\n",average(student));
	
	system("pause");
	return 0;
} 

struct data best(struct data student[]){
	int max=0,Mnum,i=0;
    
	for(i=0;i<5;i++){
		if(student[i].grade>max){
			max=student[i].grade;
		}
		if(max==student[i].grade){
			Mnum=i;
		}
	}
    return(student[Mnum]);
}

void failed(struct data student[]){
	int i=0;
	printf("���ή�G");
	for(i=0;i<5;i++){
		if(student[i].grade<60){
			printf("%s�G%d��\t",student[i].name,student[i].grade); 
		}
	}
	printf("\n");
}

double average(struct data student[]){
	int i=0 ,sum=0;
	double Savg=0;
	
	for(i=0;i<5;i++){
		sum+=student[i].grade;
	}
	Savg=sum/5;
	return(Savg);
}
 
