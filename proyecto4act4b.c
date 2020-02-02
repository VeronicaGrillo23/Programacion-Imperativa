#include<stdio.h>

int iesimo_primo(int N)
{
   int a[N], c, divisores, i;
   
    do{
        printf("Introduzca el numero a determinar si es o no primo:");
        scanf("%d",&a[N]);
      } while(!(N>=0)); /*He incluido un bucle do-while, para que el programa comience cuando le den un numero estrictamente positivo */
   
    divisores = 0; /*inicializo el contador divisores a 0 */
   
    for(c=2; c<=N/2; c++) /*Divido hasta n/2, porque superior a n/2 no hay divisores */
    if (N%c == 0) divisores++; /*Si el resto es cero, aumento en uno el contador de divisores*/
   
    if (divisores >= 1)
	{
      printf("El numero no es primo");
    }
    else
	{   printf("Introduzca el valor de i: ");
	    scanf("%d", &i);
		i = i + 1;
		printf("El iesimo primo es: %d", i);
    } 
}
int main(void)
{
	int x;
	printf("Ingrese el entero N: ");
	scanf("%d", &x);
    
	if(x>0)
    {
	    iesimo_primo(x);
    }
    else
    {
       printf("Ingresa un nuevo valor: ");
       scanf("%d", &x);
       printf("El nuevo valor es: %d", x);
	}
}
