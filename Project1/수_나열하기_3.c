#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long int a, m, d, n;

	scanf("%lld %lld %lld %lld", &a, &m, &d,&n);

	for (int i = 1; i < n; i++)
	{
		a=a*m+d;
	}

	printf("%lld", a);

	return 0;
}