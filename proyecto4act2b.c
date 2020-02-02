#include<stdio.h>

int main(void)
{
	int X, x, Y, y, Z, z;
	
	printf("Ingrese los valores de x, X, y, Y, z, Z: ");
	scanf("%d""%d""%d""%d""%d""%d", &x, &X, &y, &Y, &z, &Z);
	x = X;
	y = Y;
	z = Z;
	printf("La precondicion es: x = %d, X = %d, y = %d, Y = %d, z = %d, Z = %d ", x, X, y, Y, z, Z);
	
	printf("\nIngrese los valores de x, X, y, Y, z, Z: ");
	scanf("%d""%d""%d""%d""%d""%d", &x, &X, &y, &Y, &z, &Z);
	x = y;
	y = y + x + z;
	z = y + x;
	printf("La nueva asignacion es: x = %d, X = %d, y = %d, Y = %d, z = %d, Z = %d", x, X, y, Y, z, Z);
	
	printf("\nIngrese los valores de x, X, y, Y, z, Z: ");
	scanf("%d""%d""%d""%d""%d""%d", &x, &X, &y, &Y, &z, &Z);
	x = Y;
	y = Y + X + Z;
	z = Y + X;
	printf("La postcondicion es: x = %d, X = %d, y = %d, Y = %d, z = %d, Z = %d ", x, X, y, Y, z, Z);
	return 0;
}
