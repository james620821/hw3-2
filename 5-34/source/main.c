#include<stdio.h>
#include<stdlib.h>

long int integerpower(int base, int exponent);

int main(void)
{
	int a, b;
	printf("��J�@�Ӽ�: ");
	scanf("%d", &a);
	printf("��J������: ");
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