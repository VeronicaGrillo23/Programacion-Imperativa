#include <stdio.h>
int main()
{ 
int i = 4; //Creamos e inicializamos la variable i
do //Instrucciones que se hacen si se cumple la condicion del While
{
printf("\n Sigma 1 es %i \n", i);  //Escribe "i" por pantalla
i = i - 1; //Incremente a "i" en uno
printf("\n Sigma 2 es %i \n", i);
}
while (i < 0); //Bucle While, solo se pone la condicion/es
printf("\n Sigma 3 es %i \n", i);
return 0;
//system("PAUSE");
}

