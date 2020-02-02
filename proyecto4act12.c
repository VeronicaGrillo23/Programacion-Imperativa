#include<stdio.h>
#define infinitoNeg -20000

int max (int num1, int num2)
{
	int result;
	
	if(num1 > num2)
	{
		result = num1;
	}
	
	else
	{
		result = num2;
	}
	return result;

}


int main (void)
{
	int r,x,s,y,e;
	printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &r);
    int array[r];
  
    
    for (int i=0; i<r;i++){
      printf("array[%d]:", i);
      scanf("%d", &array[i]);
    }
    s = array[0];
    y = infinitoNeg;
    x = 1;
    e= (s-array[r-1]);
    while(x!=r)
    {
     s=max (s, array[r-1]);
     y= max (y, e);
     x++;
    }
    printf("Los valores de s es: %d",y);
    return 0;
}