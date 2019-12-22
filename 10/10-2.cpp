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
	cout<<"计 = "<<x1<<x2<<"程 = "<<max;
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
	cout<<"计 = "<<x1<<x2<<x3<<"程 = "<<max;
}

int main (){
	int x1, x2 ,x3 ,sum;
	
	printf("叫块ま计计秖(2~3ま计)");
	cin>>sum;
	
	if(sum==2){
		printf("叫块2ま计");
		cin>>x1>>x2;
		max(x1, x2);
	}else if(sum==3){
		printf("叫块3ま计");
		cin>>x1>>x2>>x3;
		max(x1, x2, x3);
	}else{
		printf("块岿粇");
	}
}
