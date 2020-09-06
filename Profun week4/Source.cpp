#include <stdio.h>
int sum(int n1, int n2)
{
	return n1 + n2;
}

int factorial(int n)
{
	int fac = 1;
	for (int i = 1; i <= n; i++)
	{
		fac *= i;
	}
	return fac;
}
int main()
{
	int num1, num2;
	scanf_s(" %d", &num1);
	scanf_s(" %d", &num2);
	printf(" %d + %d = %d", num1, num2, sum(num1, num2));

	if (num1 + num2 >= 0)
	{
		if (num1 + num2 > 0 && num1 + num2 <= 1000)
		{
			printf("\n %d! = %d", sum(num1, num2), factorial(sum(num1, num2)));
		}
	}

	return 0;
}