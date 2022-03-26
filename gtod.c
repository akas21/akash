#include<stido.h>
int btod(int);
int main()
{
int binary,decimal];
printf("enter the binary input:");
scanf("%d",&binary);
decimal=btod(binary);
printf("decimal eqvuvalent=%\n",decimal);
return0;
}
int btod(int bin)
{
if(bin==0)
{
return0;
}
else
{
return(bin%10+btod(bin/10)*2);
}
}
