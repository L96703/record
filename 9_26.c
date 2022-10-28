/*#include<stdio.h>
void test()
{
	static/*静态局部变量*//* int a = 4;
	a++;
	printf(" a = %d\n", a);
}
int main()
{
	int t = 0;
	while (t<7)
	{
		test();
		t++;
	}
	return 0;
}*/

/*
#include<stdio.h>
int Max(int x,int y)
{
	if (x>y)
	return x;
	else
	return y;
}
int main()
#define  MAX(X,Y) (X>Y?X:Y)
{
	int a = 10;
	int b = 20;
	int max = MAX(a,b);
	printf("max = %d\n",max);
	max = MAX(a,b);
	printf("max = %d\n",max);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	printf("%p\n",&a);
	printf("%p\n",p);
	*p = 20;
	printf("%d\n",a);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	char a = 'c'; 
	char* b = &a;
	printf("%d\n",sizeof(a));
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int a = 10;
	int* b = &a;
	printf("%d\n",sizeof(a));
	return 0;
}
