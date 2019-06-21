#include<iostream>
#include<math.h>

using namespace std;
class programa{
	public:

	float x,y, a,b,c,d;
	programa(){
		}
		
		void operacion();
		void positivo();
		void negativo();
		void formula();
};
void programa::operacion(){
	cout<<"ingresa el valor  de a"<<endl;
	cin>>a;

	cout<<"ingresa el valor de b"<<endl;
	cin>>b;
	cout<<"ingresa el valor de c"<<endl;
	cin>>c;
}
	void programa::formula(){
	d=b*b-4*a*c;
	}
	void programa::positivo(){
	x=(-b+sqrt(d))/(2*a);
		cout<<" el resultado de x1"<<x<<endl;
	}
	void programa::negativo(){
	y=(-b-sqrt(d))/(2*a);
		cout<<" el resultado de y1"<<y<<endl;	
	}

int main(){
	programa*obj=new programa;
	obj->operacion();
	obj->positivo();
	obj->negativo();
	obj->formula();
	return 0;
}
