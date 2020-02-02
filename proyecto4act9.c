#include<stdio.h>

void intercambiar(int a[], int tam, int i, int j)

{  
	   

	for(int t = 0; t < tam; t++)
	{   
		int b;
		
      
		if(j !=i)
		{   b = a[j];
            a[j] = a[i];
            a[i] = b;
            break;

        }

       
       
        
	
	}
}
int main(void)
{
	int x;
	int s;
	int r;
	
	printf("Ingrese el tamaño del arreglo: ");
	scanf("%d", &x);
    int array[x];
	for (int y=0; y<x; y++)
	{
      printf("array[%d]:", y);
      scanf("%d", &array[y]);
    }
    printf("ingrese la posicion i: ");
    scanf("%d", &s);
    printf("ingrese la posicion j: ");
    scanf("%d", &r);
    intercambiar(array,x,s,r);
    for(int y=0; y<x; y++)
      {
      	printf("\nEl nuevo arreglo: %d",array[y]);
      

      }
   
    
    return 0;
}
