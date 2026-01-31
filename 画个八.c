#include<stdio.h>
int main()
{
	int i,j,k,l,m,n;
	for(l=1;l<=4;l++)
	{
		for(m=1;m<=l;m++)
			putchar('-');
		for(n=5;n>=2*l-1;n--)
			putchar('*');
		putchar('\n');
	}
	for(i=3;i<=4;i++)
	{
		for(j=3;j<=7-i;j++)
			putchar('-');
		for(k=3;k<=2*i-1;k++)
			putchar('*');
		putchar('\n');
	}
	getchar();
	return 0;
}
