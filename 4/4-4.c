#include <stdio.h>
#include <stdlib.h>

double BMI(double H, double W);

int main(){
    double H,W;

    printf("輸入身高(公尺):");
    scanf("%lf",&H);
    printf("輸入體重(公斤):");
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

