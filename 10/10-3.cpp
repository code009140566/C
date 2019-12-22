#include<iostream>
#include<cstdlib>
using namespace std;

class CSphere{
	private:
		int x;
		int y;
		int z;
		int radius;
	
	public:
		CSphere (int x1, int y1, int z1, int radius1){
			x=x1;
			y=y1;
			z=z1;
			radius=radius1;
		}
		
		void setLocation(int x1,int y1,int z1){
			x=x1;
			y=y1;
			z=z1;	
		}
		
		void setRadius(int radius1){
			radius=radius1;
		}
		
		double volume(void){
			double vol;
			vol=3.14*(radius*radius*radius);
			vol=vol/3*4;
		
			return vol;	
		}
		
		void showCenter(){
			cout<< "¶ê¤ß®y¼Ð= [" << x << "," << y << "," << z << "]¡A";
		}
};

int main(){
	
	CSphere B1(1,1,1,1);
	
	B1.setLocation(2,2,2);
	B1.setRadius(3);
	
	B1.showCenter();
	cout<< "Åé¿n=" << B1.volume() <<endl;
	 
	system("pause");
	return 0;
}
