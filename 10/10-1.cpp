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
	
	cout<<"輸入要轉成絕對值的數：";
	cin>>x;
	
	if(x-int(x)==0){
		ix=int(x);
		cout<<"原值 = "<<int(x)<<"絕對值 = "<<my_abs(ix)<<endl;
	}else{
		dx=x;
		cout<<"原值 = "<<x<<"絕對值 = "<<my_abs(dx)<<endl;
	}
	
	return 0;
	system("pause");
}
