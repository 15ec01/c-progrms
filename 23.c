#include<stdio.h>
int main()
{
int a[10],temp;
int u;
for(u=0;u<10;u++)
{
scanf("%d",&a[u]);
}
temp=a[0];
for(u=0;u<10;u++)
{
if(a[0]>a[u])
{
temp=a[u];
}
printf("the largest number is %d",temp);
}
}
