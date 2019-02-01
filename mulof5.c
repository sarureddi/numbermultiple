# numbermultiple
#include<stdio.h>
#include<conio.h>
void main()
{
long int sum=0,i,n;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("the 5 multiple of the value n is",i,5*i);
}
getch();
}
