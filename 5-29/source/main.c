#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, i=1;
	printf("輸入兩個數字: ");
	scanf("%d %d",&a,&b);

	while (i%a != 0 || i%b != 0)
	{
		i = i + 1;
	}
	printf("最小公倍數為: %d\n",i);
	system("pause");
}