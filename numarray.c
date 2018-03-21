#include<stdio.h>
int main()
{
int u,v,i,j;
scanf("%d %d",&u,&v);
for(i=2;i<=u&&i<=v;i++)
{
if(u%i==0&&v%i==0)
j=i;
}
printf("%d %d",j,j);
return 0;
}
