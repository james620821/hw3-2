#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a;
	printf("輸入一個大小寫的字母: ");
	scanf("%c",&a);

	if (a<'A' || a>'z')
	{
		printf("輸入正確的字母!!\n");
	}
	else if (a >='a')
	{
		a = a - 32;
		printf("%c\n",a);
	}
	else if (a <= 'Z')
	{
		a = a + 32;
		printf("%c\n",a);
	}
	

	system("pause");


	

}