#include <stdio.h>

/*
int main()
{
	int i = 1;
	char* p = (char*)&i;
	if(*p == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
}
*/


int check_sys(void)
{
	int i = 1;
	return *(char*)&i;
}
/*
int main()
{
	//����1��С��
	//����0����� 
	int ret = check_sys();
	if(ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
*/

int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("%d %d %d",a,b,c);
	return 0;
}
