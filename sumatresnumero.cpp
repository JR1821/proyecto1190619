#include <stdio.h>
#include <iostream>
using namespace std;

#define TAMANO 5
 
int main()
{
   
   int a[ TAMANO ] = { 1, 3, 5, 4, 7 };
   int i; 
   int total = 0; 
   
   
   for ( i = 0; i < TAMANO; i++ ) {
      total += a[ i ];
   } 
 
   printf( "El total de los elementos del arreglo es %dn", total );
   
   return 0; 
 
} 
