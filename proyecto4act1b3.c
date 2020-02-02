#include<stdio.h>
#include<assert.h>

int main(void)
{
	int xin,yin;
	int x,y,z;
	printf("Introdusca los valores de x, y, z: ");
	scanf("%d""%d""%d", &xin, &yin, &z);
	x = xin;
	y = yin;
	// P : x = X ^ y = Y
        assert(x == xin && y == yin);
	z = x;		
	x = y;
	y = z;
	printf("Los nuevos valores de x, y, z son: %d %d %d", x, y, z);
	// Q : x = Y ^ y = X
        assert(x == yin && y == xin);
	return 0;
}
