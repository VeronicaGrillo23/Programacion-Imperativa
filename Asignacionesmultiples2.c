#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int X, Y, Z;
int x, y, z;
printf("Introduzca los valores de x, y, z\n");
scanf("%d""%d""%d", &X, &Y, &Z);
x = X;
y = Y;
z = Z;
//{Pre: x = X, y = Y, z = Z}
x = y;y = y + x + z;z = y + x;
printf("Los nuevos valores de x, y, z son \n %d %d %d\n", x, y, z); 
//{Post: x = Y, y = Y + X + Z, z = Y + X}
return 0;
}







