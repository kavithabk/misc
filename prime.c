#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n, int i)
{
	if ( i == 1)
		return true;
	if (n % i == 0)
		return false;
	else
		isPrime(n, i-1);
}

int main(int argc, char * argv[])
{
	int n;
	printf("Enter n\n");
	scanf("%d", &n);
	printf("%d is %s", n, isPrime(n, n/2)?"is prime":"not prime");
	return 0;
}
