#include <stdio.h>
#include <stdlib.h>

int main (){

	int stdScore;
	int A=0,B=0,C=0,std;
	
	for(std=1;std<=10;std++){
		printf("�п�J��%d�즨�Z�G" ,std);
		scanf("%d" ,&stdScore);
		
		if(stdScore>=76){
			A+=1;
		}else if(stdScore>=60&&stdScore<=75){
			B+=1;
		}else if(stdScore>=0&&stdScore<=59){
			C+=1;
		}
	}
	printf("A��%d�H\nB��%d�H\nC��%d�H\n",A,B,C);
	
	system("pause");
	return 0;
} 
