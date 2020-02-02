#include <stdio.h>
#include <stdbool.h>
int main(void)
{
int x = 4;
int y = (-4);
int z = 8;
bool w= false, b = false;

printf("\n x mod 4 = 0");
if (x % 4 == 0){
printf("Verdadero\n");
}else{
 printf( "falso\n");
}

printf("\n x + y = 0 && y - x = (-1) * z = ");
if (x + y == 0 && y - x == (-1) * z){
printf("Verdadero\n");
}else{
 printf( "falso\n");
}

printf("\n not b && w");
if (!b && w){
printf("Verdadero\n");
}else{
 printf( "falso\n");
}

return 0;
}
