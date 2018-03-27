#include<stdio.h>
void main()
{
int hrs,min,hrs1,min1,hrs2,min2;
printf("enter 2 times in hour and minute format");
scanf("%d%d",&hrs1,&min1);
scanf("%d%d",&hrs2,&min2);
hrs=hrs2-hrs1;
min=min2-min1;
printf("%d\t%d",hrs,min);
}
