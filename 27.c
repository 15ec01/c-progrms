#include<stdio.h>
void main()
{
char str[10],i;
printf("enter a string");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if((str[i]>'a')&&(str[i]<'z'))
{
printf("no numeric");
}
else
{
printf("%c\n",str[i]);
}
}
}
