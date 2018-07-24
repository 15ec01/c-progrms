#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int count=0,i;
    scanf("%[^\n]s",str);
    int a;
    a=strlen(str);
	for (i = 0; i<a; i++)
		if (str[i] == '.')
		count++;
	printf("%d",count);
	return 0;
}
