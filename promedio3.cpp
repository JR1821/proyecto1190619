#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

class array{
	public:
		int tam, n, num, suma, exp, promedio, i, a, b, c, d;
		
		array(){
			tam = 0;
			n = 0;
			i = 0;
			suma = 0;
			promedio = 0;
			
		}
		void operacionexponencial ();
		void creararray();
		
};
void array :: creararray(){
	cout<<"Dame el tamano del arreglo"<<endl;
	cin>> tam;
	int array[tam];

	 for(i=0;i<tam;i++){
		
		cout<<"Dame tu calificacion "<<endl;
		cin>> num;
		array[i]=num;
		suma=suma + array[i];
		promedio=suma/tam;
	}
	
	cout<<"opciones promedio = 1, exponencial = 2"<<endl;
	cin>> d;
	
	if(d==1){
		cout<<"Tu promedio es"<<promedio<<endl;
	}
	if(d==2){
		cout<<"Dame la exponencial"<<endl;
		int n1, contador=0,res;
		cin>> n1;
		
	for(int i=0; i<tam; i++){
	
	
	array[i];
	int r=1;
	for(int j=0; j<n1; j++){
	
	    r=r * array[i];
	    
	}
	cout<<r<<endl;}
}
}

int main(){
array * obj=new array();
obj->creararray();
return 0;
}
