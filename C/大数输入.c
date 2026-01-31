#include <stdio.h>

int main()
{
	int age;
	const double sec=3.156e7;
	scanf("%d",&age);
	long long total=(long long)(age*sec);
	printf("%lld\n",total);
	
	return 0;
}
