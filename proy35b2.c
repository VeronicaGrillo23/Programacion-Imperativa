#include <stdio.h>
#include <stdbool.h>
int main(void)
{ 
int x = 5, i = 0;
bool res = false; //Creamos e inicializamos la variable i
do //Instrucciones que se hacen si se cumple la condicion del While
{
i = 2;
res = true;
res = (res && ((x % i) != 0));
i = i + 1;
printf("\n Sigma es %d %d %d \n", x, i, res);  //Escribe "i" por pantalla
}
while (i < x && res); //Bucle While, solo se pone la condicion/es
//system("PAUSE");

return 0;
}

