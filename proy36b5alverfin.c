#include <stdio.h>
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
printf("\n sigma es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}

void imprimeEntero1(int n1)//,int n2,int n3,int n4)
{
printf("\n sigma 1 es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}

void imprimeEntero2(int n1)//,int n2,int n3,int n4)
{
printf("\n sigma 2 es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}

void imprimeEntero3(int n1)//,int n2,int n3,int n4)
{
printf("\n sigma 3 es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}

void imprimeEntero4(int n1)//,int n2,int n3,int n4)
{
printf("\n sigma 4 es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}

void imprimeEntero5(int n1)//,int n2,int n3,int n4)
{
printf("\n sigma 5 es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}

void imprimeEntero6(int n1)//,int n2,int n3,int n4)
{
printf("\n sigma 6 es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}

void imprimeEntero7(int n1)//,int n2,int n3,int n4)
{
printf("\n sigma 7 es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}


int main()
{
int r;
//i = pedirEntero();
r = pedirEntero();
do
{
//imprimeEntero(y);
imprimeEntero1(r);

if(r < 0)
{
imprimeEntero2(r);
r = r + 1;
imprimeEntero3(r);
}
else if(r > 0)
{
imprimeEntero4(r);
r = r - 1;
imprimeEntero5(r);
}
imprimeEntero6(r);
}
while (r != 0);
imprimeEntero7(r);
return 0;
}





















