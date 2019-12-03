#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[10];
	int grade;
}S[5]={"王一",90,"李文二",55,"張三星",80,"劉四",35,"林五",92};

int main(){
	int max=0,Mnum=0;
	double sum=0;
	int i;

	printf("姓名\t分數\n");
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
	printf("最高分為：%s\t%d分\n",S[Mnum].name,S[Mnum].grade);
	
	printf("不及格：");
	for(i=0;i<5;i++){
		if(S[i].grade<60){
			printf("%s：%d分\t",S[i].name,S[i].grade); 
		}
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		sum+=S[i].grade;
	}
	printf("平均:%.2f分\n",sum/5);
	
	system("pause");
	return 0;
} 
