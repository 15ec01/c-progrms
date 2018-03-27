#include<stdio.h>
void main()
{
int minute,hour;
printf("enter the minute");
scanf("%d",&minute);
hour=minute/60;
minute=minute%60;
printf("%d\t%d",hour,minute);
}
