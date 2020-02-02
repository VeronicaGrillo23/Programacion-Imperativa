#include <stdio.h>
#include <stdlib.h>
int pedirEntero() //declaramos la funcion pedirEntero, pide un entero y lo devielve
{
int m1;//, m2, m3, m4;
printf("\n Ingrese el numero "); //x y,z m \n");
scanf("%d", &m1); //  "%d" "%d" "%d", &m1, &m2, &m3, &m4);
return m1;//, m2, m3, m4;
}
//toma un entero como partametro y lo imprime
void imprimeEntero(int n1)//,int n2,int n3,int n4)
{
printf("El numero es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}

int main()
{
int x, y, z, m;
x = pedirEntero();
y = pedirEntero();
z = pedirEntero(); 
m = pedirEntero();
if(x < y)
{
m = x;
}
else if(x >= y)
{
m = y;
}
imprimeEntero(x);
imprimeEntero(y);
imprimeEntero(z);
imprimeEntero(m);//x, y, z, m);
if(m < z)
{
//goto SKIP_ITERATION;
}
else if(m >= z)
{
m = z;
}
imprimeEntero(x);
imprimeEntero(y);
imprimeEntero(z);
imprimeEntero(m);//x, y, z, m);
return 0;
}

