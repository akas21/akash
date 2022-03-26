#include<stdio.h>
#include(math.h)
#degree pi 3.142857
int main ()
{
flaot x,degree,nume,deno,sum,term;
int i;
printf("enter degree;");
scanf("%f",$degree);
x=degree*(pi/180.0);
printf("x=%f\n",x);
sum=0;
nume=0;
deno=0;
i=1;
do
{
term=nume /deno;
sum=sum+term;
i=i+2
nume=-nume*x*x;
deno=deno*i*(i-1);
}
while(fobs(term)>=0.00001);
printf("computed value of sinn(%f)=%f/n",degree,sum);
printf("value from library function is sin(%f)=%f\n",degree,sin(x));
return 0;
}
