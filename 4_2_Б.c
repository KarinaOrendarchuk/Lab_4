#include <stdio.h>
#include <math.h>

int a = 20;
int b = 80;

double i = 0;
 double d = 1;

int main(void)
{


double i = a;

while (i<=b)
 {

  if (fmod(i,10) == 0)
		d=d*i;
i++;
}

printf("\nдобуток всіх чисел, кратних 10 [%d;%d] = %.0lf\n", a, b, d);

    return 0;
}