//1)
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
int x, y, z;
printf("Coloque el valor de las variables x y z\n");
scanf("%d %d %d", &x, &y, &z);
//int d;
//d= x + y + 1;
printf("\n x + y + 1 = %d \n", x + y + 1);
printf("\n z * z + y * 45 - 15 * x = %d \n", z * z + y * 45 - 15 * x);
printf("\n y - 2 = (x * 3 + 1) mod 5 =");
if (y - 2 == (x * 3 + 1) % 5){
printf("Verdadero\n");
}else{
 printf( "falso\n");
}
printf("\n y / 2 * x = %d \n", y / 2 * x);
printf("\n y < x * z = ");
if (y < x * z) {
 printf("verdadero\n");
} else {
 printf( "falso\n");
}
//printf("\n x + y + 1 = %d \n", x + y + 1);
return 0;
//system("PAUSE");
}





