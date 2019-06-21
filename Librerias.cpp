#include<iostream>
#include<math.h>

using namespace std;
class programa{
	public:

	float x,y, a,b,c,d;
	programa(){
		}
		
		void operacion();
};
void programa::operacion(){
	cout<<"ingresa el valor  de a"<<endl;
	cin>>a;

	cout<<"ingresa el valor de b"<<endl;
	cin>>b;
	cout<<"ingresa el valor de c"<<endl;
	cin>>c;
	d=b*b-4*a*c;


	 	x=(-b+sqrt(d))/(2*a);
	 	y=(-b-sqrt(d))/(2*a);
	 	cout<<" el resultado de x1"<<x<<endl;
	 	cout<<"el resultado de y2"<<y<<endl;	
	
}
	
int main(){
	programa*obj=new programa;
	obj->operacion();
	return 0;
}
