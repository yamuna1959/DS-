#include<stdio.h>
int add(int,int);
void main()
{
int a,b,sum;
clrscr();
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
printf("sum is %d",add(a,b));
getch();
}
int add(int x,int y)
{
return(x+y);
}