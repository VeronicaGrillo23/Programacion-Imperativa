#include<stdio.h>
#include<assert.h>

int min(int num1, int num2);

int min(int num1, int num2)
{
	int result;
	
	if(num1 < num2)
	{
		result = num1;
	}
	
	else
	{
		result = num2;
	}
	return result;
}

int main(void)
{
	int x, y, resultado;
	
	printf("Introdusca los valores de x e y: ");
	scanf("%d""%d", &x, &y);
        assert(x!=y);
	resultado = min(x, y);
	printf("El minimo entre estos dos valores es: %d", resultado);
        assert(x<y || x>y);
	return 0;
	
	
}
