#include <stdio.h>
#include <stdlib.h>

double BMI(double H, double W);

int main(){
    double H,W;

    printf("��J����(����):");
    scanf("%lf",&H);
    printf("��J�魫(����):");
    scanf("%lf",&W);
	   
	BMI(H, W);
	
	system("pause");
	return 0;
}

double BMI(double H, double W){
	double result;
	result=W/(H*H);
    printf("BMI:%lf\n",result);
}

