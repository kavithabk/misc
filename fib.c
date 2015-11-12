#include <stdio.h>

 int fib(int n)
{       
	static int i = 0, j = 1, sum = 0;
	if (n > 0) {
		sum = i + j;
		printf("%d\t", sum);
		i = j;
		j =sum;
		fib(n-1);
	}
}       

int main(int argc, char *argv[])
{       
	int n;
	printf("Enter n\n");
	scanf("%d", &n);
	fib(n);

	return 0;
}
