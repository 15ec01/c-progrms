#include<stdio.h>
#include<conio.h>
int  power(int ,int);
int main()
{
int result,b,c;
printf("Enter the number\n");
scanf("%d",&b);
printf("Enter the power\n");
scanf("%d",&c);
result=power(b,c);
printf("Value of %d^%d = %d",b,c,result);
getch();
}
int power(int c, int d)
{
int pow=1;
int i=1;
while(i<=d)
{
pow=pow*c;
i++;
}
return pow;
}
