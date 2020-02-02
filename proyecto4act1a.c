#include<stdio.h>
#include<assert.h>


void holaHasta(int n)
{	
    int i;
    i = 0;
    while(i<n)
	{
		i++;
		printf("\nHola\n");
	}
}

int main(void)
{
	int x;
	printf("\nIngrese un numero: ");
	scanf("%d", &x);
	assert(x>0);
	holaHasta(x);
	return 0;

}
