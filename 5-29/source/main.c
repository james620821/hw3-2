#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, i=1;
	printf("��J��ӼƦr: ");
	scanf("%d %d",&a,&b);

	while (i%a != 0 || i%b != 0)
	{
		i = i + 1;
	}
	printf("�̤p�����Ƭ�: %d\n",i);
	system("pause");
}