#include <stdio.h>

int main()
{ 
int i = 4; //Creamos e inicializamos la variable i
//          bool b = true; //Variable "b" inicializada en true

while (i != 0 ) //Bucle While, solo se pone la condicion/es
{
//printf("\n Ingrese el valor de i = ");
//scanf("%d", i);

printf("\n sigma 1 es %d \n", i);    //Escribe "i" por pantalla
i = i - 1; //Incremente a "i" en uno
printf("\n sigma 2 es %d \n", i);
}
printf("\n sigma 3 es %d \n", i);    	  
return 0;
//system("PAUSE");
}

