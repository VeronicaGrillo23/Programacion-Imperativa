//Asignaciones multiples
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int X, Y;
int x, y;
printf("Introduzca los valores de x, y\n");
scanf("%d""%d", &X, &Y);
x = X;
y = Y;
//{P: x = X, y = Y}
x = x + 1; y = x + y;
printf("Los nuevos valores de x, y, z son \n %d %d\n", x, y);
//{Q: x = X + 1, y = X + Y}
return 0;
}






















