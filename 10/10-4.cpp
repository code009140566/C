#include<iostream>
#include<cstdlib>
using namespace std;

class CSphere{
	public:
		int x;
		int y;
		int z;
		int radius;
};

int main(){
	double vol;
	
	CSphere B1;
	
	B1.x=2;
	B1.y=2;
	B1.z=2;
	B1.radius=3;
	
	vol=B1.radius*B1.radius*B1.radius*4/3*3.14;
	
	cout<< "¶ê¤ß®y¼Ð= [" << B1.x << "," << B1.y << "," << B1.z << "]";
	cout<< "Åé¿n=" << vol <<endl;
	 
	system("pause");
	return 0;
}
