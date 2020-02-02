#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//suma
//int suma(int x, int y);   // prototipo de la función 
//suma(x,y)                   // cuando no indicamos el tipo de dato se le adjudica
                            // el tipo por defecto "int"
//{
// return(x+y);             //retorno de la función
//}

//pedir entero
int pedirEntero()
{
int n;
printf("\n Ingrese un numero Entero por favor\n");
scanf("%d", &n);
return n;
}

//imprimir entero
void imprimeEntero(int n1)//toma un entero como partametro y lo imprime
{
printf("El numero es: %d \n", n1);
}

//umprimir hola n veces
void holaHasta(int n)//lee una variable n tipo int e 
//imprime por pantalla \hola" n veces.
{
int x;
do
{
if(n > 0)
{
printf("Hola\n");
n = n - 1;
}
else if(n < 0)
{
assert (n > 0 && n == x);
}
}
while(x != 0);
{
x = x - 1;
}
assert( x >= 0 );
//return n;
}













