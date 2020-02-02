#include <stdio.h>
#include <stdbool.h>
int main(void)
{ 
int x = 5, i = 0;
bool res = false; //Creamos e inicializamos la variable i
i = 2;
res = true;
while(i < x && res)
{
res = (res && ((x % i) != 0));
i = i + 1;
//printf("\n Sigma es %d %d %d \n", x, i, res);  //Escribe "i" por pantalla
printf("\n Sigma es %d %d %d \n", x, i, res);
}
return 0;
}


