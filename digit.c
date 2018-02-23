#include <stdio.h>
int main()
{
int n, Reminder, Count=0;
printf("\n Please Enter any number\n");
scanf("%d", &n);
while(n> 0)
{
n = n / 10;
Count = Count + 1;  
}
printf("\n Number of Digits in a Given Number = %d", Count);
return 0;
}
