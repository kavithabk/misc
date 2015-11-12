#include <stdio.h>
int fact(int n)
{
	if (n == 1)
		return 1;
	return n * fact(n - 1);
}

int main(int argc, char *argv[])
{
	int n;
	printf("Enter n\n");
	scanf("%d", &n);
	printf("Factorial of n : %d\n", fact(n));

	return 0;
}
