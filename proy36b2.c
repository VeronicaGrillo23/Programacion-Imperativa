#include <stdio.h>
#include <stdbool.h>
int pedirEntero() //declaramos la funcion pedirEntero, pide un entero y lo devielve
{
int m1;//, m2, m3, m4;
printf("\n Ingrese los numeros "); //x y,z m \n");
scanf("%d", &m1); //  "%d" "%d" "%d", &m1, &m2, &m3, &m4);
return m1;//, m2, m3, m4;
}
//toma un entero como partametro y lo imprime
void imprimeEntero(int n1)//,int n2,int n3,int n4)
{
printf("El total es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}
int main()
{
int x, y, z, b, w;
x = pedirEntero();
y = pedirEntero();
z = pedirEntero(); 
b = pedirEntero();
w = pedirEntero();

imprimeEntero(x % 4 == 0);

imprimeEntero(x + y == 0 && y - x == (-1) * z);

imprimeEntero(! b && w);

return 0;
}

