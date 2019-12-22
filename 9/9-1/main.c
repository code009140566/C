/* prog13_1, 大型程式的範例 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>   		/*  含括math.h標頭檔 */
#define PI 3.1416

double area(double r);
double peri(double r);
void show(double r);

int main(){      		/* 定義main()函數 */
   printf("area(2.2)=%5.2f\n",area(2.2));
   printf("peri(1.4)=%5.2f\n",peri(1.4));
   system("pause");
   return 0;
}

