#include <stdio.h>

/*
int main()
{
	int i = 1;
	char* p = (char*)&i;
	if(*p == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
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
	//返回1，小端
	//返回0，大端 
	int ret = check_sys();
	if(ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
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
