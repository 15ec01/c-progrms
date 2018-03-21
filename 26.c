#include<stdio.h>
void main()
{
int i,n;
int sum=0,a[60];
int average=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
average=sum/n;
printf("%d",average);
}
