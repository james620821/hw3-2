#include<stdio.h>
#include<stdlib.h>

void henota(int n, char d, char b , char c);

int main(void)
{
	int a;
	
	printf("¿é¤JºÐ¤l¼Æ: ");
	scanf("%d", &a);
	henota(a,'1','2','3');
	system("pause");
	return 0;
}

void henota(int n, char d , char b , char c)
{
	if (n == 1)
	{
		printf("Move sheet from %c --> %c\n", d, c);

	}
	else
	{
		henota(n - 1, d, c, b);
		henota(1, d, b, c);
		henota(n - 1, b, d, c);
	}
}