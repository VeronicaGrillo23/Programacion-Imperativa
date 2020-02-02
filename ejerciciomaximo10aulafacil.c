#include <stdio.h>
#include <stdlib.h>
#include "librerializ2.h"
//defini la funcion en el main
//int main()
//{
//int n;
//n = pedirEntero();
//if(n >= 1 && n < 10)
//{
//imprimeEntero(n);
//}
//else if(n < 1)
//{
//n = 0;
//imprimeEntero(n);
//}
//return 0;
//}
//La vuelvo funcion con o sin retorno
//int Maximo10 (int n)
//{
//n = pedirEntero();
//if(n >= 1 && n < 10)
//{
//imprimeEntero(n);
//}
//else if(n < 1)
//{
//n = 0;
//imprimeEntero(n);
//return n;
//}
//}

int main()
{
int longitud_array;//creamos una variable para dar longitud al arrays
//Pedimos al usuario que introduzca la longitud (entre 1 y 10)
printf("introduzca un número entre el 1 y el 10\n");
scanf("%d", &longitud_array);
printf("la longitud del arreglo es: %d\n", longitud_array);
//Solo seguirá el programa si la funcion Maximo10 devuelve un valor
//que no sea 0...
if(Maximo10(longitud_array) !=0)
{
//Creamos el array con la longitud dada por el usuario
int numeros[longitud_array];
//Añadimos valor al array y lo mostramos por pantalla 
for(int i = 0; i < longitud_array; i++)
{
numeros[i] = i+1; //añadir valor
printf("Numero %i del array: %i\n", i+1, numeros[i]); //mostrarlo
}
}
else if(longitud_array < 1)
{
//Si el usuario introduce un valor menor que 0 o mayor que 10, no 
//continua el programa.
printf("la longitud no es correcta");
}
return 0;
}










































