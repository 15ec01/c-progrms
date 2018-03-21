#include<stdio.h>
void main()
{
int n,add=0,i,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
add=add+a[i];
}
printf("median is %d",add/n);
}
