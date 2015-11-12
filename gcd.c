#include<stdio.h>

int gcd(int m, int n)
{
	while (m != n) {
		if (m > n)
			return gcd(m - n, n);
		else
			return gcd(m, n -m);
	}
	return m;
}

int main(int argc, char *argv[])
{	int m, n;
	printf("Enter the numbers m and n\n");
	scanf("%d %d", &m, &n);
	printf(" GCD is %d\n", gcd(m, n));
	return 0;
}
