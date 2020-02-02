#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void)
{
	int num;
	num = true;
	assert(true);
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	num = abs(num);
	assert(num>0);
	printf("El valor absoluto del numero es: %d", num);
	return 0;
}
