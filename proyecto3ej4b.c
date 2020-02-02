#include <stdio.h>
//#include <iostream>
//using namespace std;
int main(void)
{
int x, y, z, m;
printf("\nIngrese valor inicial sigma 0 x y z m\n");
scanf("%d" "%d" "%d" "%d", &x, &y, &z, &m);
if(x < y)
{
m = x;
}
else if(x >= y)
{
m = y;
}

printf("\nel estado sigma 1 es x = %d y = %d z = %d m = %d", x, y, z, m);
if(m < z)
{
//goto SKIP_ITERATION;
}
else if(m >= z)
{
m = z;
}
printf("\nel estado sigma 2 es x = %d y = %d z = %d m = %d", x, y, z, m);

return 0;
}

