#include<stdio.h>
#include<string.h>
 void  main()
{
char a[100];
gets(a);
int n=strlen(a);
int i,count=0;
for(i=0;i!=n;i++)
{
if(a[i]!=' ')
{
count++;
}
}
printf("%d",n);
}
