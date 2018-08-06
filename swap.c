#include<stdio.h>
int main()
{
int a,b,temp;
printf("\n enter the values of a and b is");
scanf("%d%d",&a,&b);
printf("Before swapping\n a=%d\n b=%d\n",a,b);
temp = a;
a=b;
b=temp;
printf("After swapping\n a=%d\n b=%d\n",a,b);
return 0;    
}
