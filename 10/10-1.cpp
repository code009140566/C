#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std ;

int my_abs(int ix){
    return -ix;
}

double my_abs(double dx){
    return -dx;
}

int main (){
	double x;
	double dx;
	int ix;
	
	cout<<"��J�n�ন����Ȫ��ơG";
	cin>>x;
	
	if(x-int(x)==0){
		ix=int(x);
		cout<<"��� = "<<int(x)<<"����� = "<<my_abs(ix)<<endl;
	}else{
		dx=x;
		cout<<"��� = "<<x<<"����� = "<<my_abs(dx)<<endl;
	}
	
	return 0;
	system("pause");
}
