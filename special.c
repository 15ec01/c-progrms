#include<stdio.h>
#include<string.h>
int main(void)
{
	char c[1000];
	int n,i,count=0;
	scanf("%s",c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]=='.'||c[i]==','||c[i]=='#'||c[i]=='?'||c[i]=='_'||c[i]=='!')
		count=count+1;
	}
	printf("%d",count);
}
