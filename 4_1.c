#include <stdio.h>
#include <math.h>

int x=0;
int y=0;
int z=0;


int main(void)
{

printf("\r\nx = ");
scanf("%d", &x);
printf("y =  ");
scanf("%d", &y);
printf("z =  ");
scanf("%d", &z);
printf("\r\n");

double a1=pow(x,2);
double a2=2*x*z;
double a3=pow(y,2);
double a4=sqrt(2*x); //n 6--
double a5=pow(x,2); //n 9
double a6=a1+a2-a3; //v 23 --
double a7=a5*y; //n 36--
double a8=a6*(a4+a7);
double a9=a8/-1290;

printf("a = %lf\n", a9);


    return 0;
}