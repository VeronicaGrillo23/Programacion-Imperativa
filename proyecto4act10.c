#include<stdio.h>
#include<stdbool.h>

struct comp_t 
{
  int menores;
  int iguales;
  int mayores;
};

struct comp_t cuantos(int a[], int tam, int elem)
{
	struct comp_t res;
	res.menores = 0;
	res.iguales = 0;
	res.mayores = 0;
	for(int t = 0; t < tam; t++)
	{
		if (elem>a[t])
		{
			res.menores++;
		}
		else if(elem==a[t])
		{
			res.iguales++;
		}
		else if(elem<a[t])
		{
			res.mayores++;
		}
	} 
	return res;
}

int main(void)
{
	int r,s;
	printf("Ingrese un numero para el elemento: ");
	scanf("%d", &s);
	printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &r);
    int array[r];
  
    
    for (int i=0; i<r;i++){
      printf("array[%d]:", i);
      scanf("%d", &array[i]);
    }
    struct comp_t x;
	struct comp_t y;
	struct comp_t z;
	x.menores = 0;
	y.iguales = 0;
	z.mayores = 0;
    
    x = cuantos(array, r, s);
    y = cuantos(array, r, s);
    z = cuantos(array, r, s);
    
    

    printf("\nElementos menores que hay en el arreglo: %d", x.menores );
    printf("\nElementos iguales que hay en el arreglo: %d", y.iguales );
    printf("\nElementos mayores que hay en el arreglo: %d", z.mayores );
    
    
    return 0;
}

