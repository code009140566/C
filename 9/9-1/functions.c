#include <stdio.h>
#include <stdlib.h>
#include <math.h>   		/*  含括math.h標頭檔 */
#define PI 3.1416
double area(double r){	/* 自訂函數area()，計算圓面積 */
   show(r);
   return (PI*pow(r,2.0)); /* pow(r,2.0)可計算r的平方 */
}

double peri(double r){     /* 自訂函數peri()，計算圓周長 */
   show(r);    
   return (2*PI*r);   
}

void show(double r){     	/* 自訂函數show()，可顯示半徑 */
   printf("半徑為%5.2f, ",r); 
}
