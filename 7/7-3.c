#include<stdio.h>
#include<stdlib.h>

struct data{
	char name[10];
	int grade;
}student[5]={"王一",90,"李文二",55,"張三星",80,"劉四",35,"林五",92},high;

struct data best(struct data student[]);
void failed(struct data student[]);
double average(struct data student[]); 

int main(){
	int max=0,Mnum=0,sum=0;
	int i;

	printf("姓名\t分數\n");
	for(i=0;i<5;i++){
		printf("%s\t%d\t\n",student[i].name,student[i].grade);
	}
	printf("\n");
	
	high=best(student);
	printf("最高分為：%s\t%d分\n",high.name,high.grade);
	
	failed(student);

	printf("平均:%.2f分\n",average(student));
	
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
	printf("不及格：");
	for(i=0;i<5;i++){
		if(student[i].grade<60){
			printf("%s：%d分\t",student[i].name,student[i].grade); 
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
 
