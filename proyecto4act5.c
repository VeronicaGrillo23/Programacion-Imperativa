#include<stdio.h>

typedef struct div_t
{
	int cociente;
	int resto;
}Div_t;

Div_t division (int x, int y)
{
	int i;
	i = 0;
	
	while(x>=y)
	{
		x = x - y;
		i++;
	}
	
	Div_t n = {i, x};
	printf("El cociente y el resto son: %d %d", n.cociente, n.resto);
	
	return n;
}

int main(void)
{
	int a,b;
	
	printf("Ingrese el numero a, b: ");
	scanf("%d""%d", &a, &b);
	if(b>=1)
	{
	  division(a,b);
    }
    
    else
    {
      printf("Error");
	}
	return 0;
	
	
}
