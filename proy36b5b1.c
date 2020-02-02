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
printf("\n El bynero es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}

int main(void)
{ 
int x = 13, y = 3, i = 0; //Creamos e inicializamos la variable i
x = pedirEntero();
y = pedirEntero();
i = pedirEntero();
i = 0;
do //Instrucciones que se hacen si se cumple la condicion del While
{
x = x - y;
i = i + 1;
imprimeEntero(x);
imprimeEntero(y);
imprimeEntero(i);
}
while (x >= y); //Bucle While, solo se pone la condicion/es
//system("PAUSE");
return 0;
}














