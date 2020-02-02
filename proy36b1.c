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
int x, y, z;
x = pedirEntero();
y = pedirEntero();
z = pedirEntero(); 

imprimeEntero(x + y + 1);

imprimeEntero(z * z + y * 45 - 15 * x);

imprimeEntero(y - 2 == (x * 3 + 1) % 5);
//if (y - 2 == (x * 3 + 1) % 5){
//printf("Verdadero\n");
//}else{
// printf( "falso\n");
//}

imprimeEntero(y / 2 * x);

imprimeEntero(y < x * z);
//if (y < x * z) {
// printf("verdadero\n");
//} else {
// printf( "falso\n");
//}

return 0;
}

