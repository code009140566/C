#include <stdlib.h>
#include <stdio.h>

int main (){
	float salary=0;
	int hours=0;
	
	printf("��J�uŪ�ɼơG");
	scanf("%d",&hours); 
	
	if(hours>=76){
		salary= (60*75)+(15*75*1.25)+((hours-75)*75*1.75);
	}else if(hours>=61&&hours<=75){
		salary=60*75+(hours-60)*75*1.25; 
	}else if(hours<=60){
		salary=hours*75;
	}
	printf("%d�ɼ��~����%f",hours ,salary);
	
	system("pause");
	return 0;

} 
