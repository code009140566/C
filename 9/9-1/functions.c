#include <stdio.h>
#include <stdlib.h>
#include <math.h>   		/*  �t�Amath.h���Y�� */
#define PI 3.1416
double area(double r){	/* �ۭq���area()�A�p��ꭱ�n */
   show(r);
   return (PI*pow(r,2.0)); /* pow(r,2.0)�i�p��r������ */
}

double peri(double r){     /* �ۭq���peri()�A�p���P�� */
   show(r);    
   return (2*PI*r);   
}

void show(double r){     	/* �ۭq���show()�A�i��ܥb�| */
   printf("�b�|��%5.2f, ",r); 
}
