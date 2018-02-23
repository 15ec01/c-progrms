#include<stdio.h>
int main()
{
int i,d,e;
printf("enter the d value");
scanf("%d",&d);
printf("enter the e value");
scanf("%d",&e);
for(i=d;i<=e;i++)
{
if(i%2==0)
printf("%d",i);
}
}
