#include<stdio.h>
int main()
{
int a,b,c;
char op;
printf("enter two number");
scanf("%d %d",&a,&b);
printf("enterchoices\n");
printf("+ for addition\n");
printf("- for substraction\n");
printf("* for multiplication\n");
printf("/ for divison\n");
printf("%% for mod\n");
scanf(" %c", &op);
if(op== '+')
{
c=a+b;
printf("output is %d\n",c);
return(-1);
}
else if(op== '-')
{
c=a-b;
printf("output is %d\n",c);
return(-1);
}
else if(op== '*')
{
c=a*b;
printf("output is %d\n",c);
return(-1);
}
else if(op=='/')
{
if(b==0)
{
	printf("enter non zero number");
}
else
{
	c=a/b;
	printf("output is %d\n",c);
	return(-1);
}
}
else if(op=='%')
{
if(b==0)
{
	printf("   ");
}
else
{
	c=a%b;
	printf("output is %d\n",c);
}
}
else
{
printf ("give correct choice");
}
//printf("output is %d",c);
return 0;
}
       


