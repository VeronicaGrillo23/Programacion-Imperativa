#include <stdio.h>
#include <stdlib.h>
//declaramos la funcion pedirEntero, que pide un entero al usuario
//y lo devielve
int pedirEntero()
{
int n;
printf("\n Ingrese un numero Entero por favor\n");
scanf("%d", &n);
return n;
}
//toma un entero como partametro y lo imprime
void imprimeEntero(int n1)
{
printf("El numero es: %d \n", n1);
}
int main()
{
int a;
a = pedirEntero();
imprimeEntero(a);
return 0;
}

