/* prog13_1, �j���{�����d�� */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>   		/*  �t�Amath.h���Y�� */
#define PI 3.1416

double area(double r);
double peri(double r);
void show(double r);

int main(){      		/* �w�qmain()��� */
   printf("area(2.2)=%5.2f\n",area(2.2));
   printf("peri(1.4)=%5.2f\n",peri(1.4));
   system("pause");
   return 0;
}

