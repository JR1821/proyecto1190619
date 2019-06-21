#include <stdio.h>
#include <iostream>
using namespace std;

#define TAMANO 7
class array{
	public:
		array(){
			
		}
		void suma();
};
void array::suma(){
	 int a[ TAMANO ] = { 2, 4, 6, 8, 10, 12, 14 };
   int i; 
   int total = 0; 
   
   
   for ( i = 0; i < TAMANO; i++ ) {
      total += a[ i ];
   } 
 
   cout<< "El total de los elementos del arreglo es "<<total <<endl;
   
}
int main(){
	array * obj = new array;
	obj->suma();
	return 0;
}
