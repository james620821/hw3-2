#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a;
	printf("��J�@�Ӥj�p�g���r��: ");
	scanf("%c",&a);

	if (a<'A' || a>'z')
	{
		printf("��J���T���r��!!\n");
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