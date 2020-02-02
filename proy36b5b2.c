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
printf("\n El bynero es: %d \n",n1); //%d %d %d \n", n1, n2, n3, n4);
}

int main(void)
{ 
//int x = 5, i = 0;
//bool res = false; //Creamos e inicializamos la variable i
int x, i;
bool res;
x = pedirEntero();
i = pedirEntero();
res = pedirEntero();

i = 2;
res = true;
while(i < x && res)
{
//do //Instrucciones que se hacen si se cumple la condicion del While
//{
res = (res && ((x % i) != 0));
i = i + 1;
//printf("\n Sigma es %d %d %d \n", x, i, res);  //Escribe "i" por pantalla
imprimeEntero(x);
imprimeEntero(i);
imprimeEntero(res);
//}
}
//while (i < x && res); //Bucle While, solo se pone la condicion/es
//system("PAUSE");
return 0;
}


















