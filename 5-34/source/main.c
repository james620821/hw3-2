#include<stdio.h>
#include<stdlib.h>

long int integerpower(int base, int exponent);

int main(void)
{
	int a, b;
	printf("輸入一個數: ");
	scanf("%d", &a);
	printf("輸入的次方: ");
	scanf("%d", &b);

	printf("ans: %d\n", integerpower(a, b));
	system("pause");
}

long int integerpower(int base, int exponent)
{
	int i = 1;
	while (exponent >= 1)
	{
		i = i*base;
		exponent =exponent- 1;
	}
	return i;
}