#include <stdlib.h>
#include <stdio.h>
#include<iostream>
using namespace std;

int max(int x1, int x2){
	int max;
	if(x1>x2){
		max=x1; 
	}else{
		max=x2;
	}
	cout<<"�ƭ� = "<<x1<<x2<<"�̤j�� = "<<max;
}

int max(int x1, int x2, int x3){
	int max, i;
	if(x1>x2){
		if(x1>x3){
			max=x1;
		}else{
			max=x2;
		}
	}else if(x1>x3){
		if(x1>x2){
			max=x1;
		}else{
			max=x2;
		}
	}else if(x2>x3){
		if(x2>x1){
			max=x2;
		}else{
			max=x1;
		}
	}else if(x2>x1){
		if(x3>x2){
			max=x3;
		}else{
			max=x2;
		}
	}else if(x3>x1){
		if(x3>x2){
			max=x3;
		}else{
			max=x2;
		}
	}else if(x3>x2){
		if(x3>x1){
			max=x3;
		}else{
			max=x1;
		}
	}
	cout<<"�ƭ� = "<<x1<<x2<<x3<<"�̤j�� = "<<max;
}

int main (){
	int x1, x2 ,x3 ,sum;
	
	printf("�п�J�޼Ƽƶq(2~3�Ӥ޼�)�G");
	cin>>sum;
	
	if(sum==2){
		printf("�п�J2�Ӥ޼ơG");
		cin>>x1>>x2;
		max(x1, x2);
	}else if(sum==3){
		printf("�п�J3�Ӥ޼ơG");
		cin>>x1>>x2>>x3;
		max(x1, x2, x3);
	}else{
		printf("��J���~");
	}
}
