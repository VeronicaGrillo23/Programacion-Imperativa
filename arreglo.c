//Arreglo o Arrays
//Declaracion
//int a [5]; //arreglo de 5 elementos 
//con índices de 0 a 4
//Inicialización
//Para inicializar o asignarle valor al segundo
// elemento del arreglo definido previamente se utiliza
//a[1] = 10;
//Lectura
//Para leer el segundo elemento del arreglo
// definido previamente se utiliza
//x= a[1];

//Formalismo Básico
//|[ var Const N : Int, a : array [0, N) of Int, Var i: Int
//{ True }
//i := 0;
//do i < N ->
//a.i :=0; i := i+1;
//od
//{ S }
//]|
#include <stdio.h>
#include <stdlib.h>
#include "librerializ2.h"

#define N 5
int main ()
{
int a[N];
int i;

//i = 0;
i = pedirEntero();
imprimeEntero(i);

while(i < N ){
a[i] = 0;
//imprimeEntero(i);
i = i + 1;
imprimeEntero(i);
};
return 0;
}


























