#include <stdio.h>
int main()
{ 
int r = 3; //Creamos e inicializamos la variable i
do //Instrucciones que se hacen si se cumple la condicion del While
{
printf("\n Sigma 1 es %i \n", r);  //Escribe "i" por pantalla
if(r < 0)
{
printf("\n Sigma 2 es %i \n", r);
r = r + 1;
printf("\n Sigma 3 es %i \n", r);
}
else if(r > 0)
{
printf("\n Sigma 4 es %i \n", r);
r = r - 1;
printf("\n Sigma 5 es %i \n", r);
}
printf("\n Sigma 6 es %i \n", r);
}

while (r != 0); //Bucle While, solo se pone la condicion/es
printf("\n Sigma 7 es %i \n", r);
return 0;
//system("PAUSE");
}

