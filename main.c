#include <stdio.h>
int fac(int n)
{
	if(n < 2)
	return 1;
	return n * fac(n-1);
}

int main()
{
	int f = fac(100);
	printf("%d", f);
	return 0;
}
