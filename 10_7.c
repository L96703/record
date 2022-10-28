#include <stdio.h>
/*
int main()
{
	int a = 2;
	int b = 3;
	int c = 1;
	int x = 0;
	if(a<b)
	{
		x = a;
		a = b;
		b = x;
	}
	if(a<c)
	{
		x = a;
		a = c;
		c = x;
	}
	if(b<c)
	{
		x = b;
		b = c;
		c = x;
	}
	printf("%d %d %d",a ,b ,c);
	return 0;
}
*/
/*
int main()
{
	int A = 0;
	int a = 0;
	for(A=1;A<=100;A++)
	{
		if(A%3==0)
		{
			a++;
			printf("%d\n",A);
		}
	}
	printf("%d\n",a);
	return 0;
}
*/
/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d",&a,&b);
	while(c=a%b)
	{
		a = b;
		b = c;
	}
	printf("最大公约数>>%d\n",b);
	return 0;
}
*/

int main()
{
	int a = 1;
	for(a=1;a<=9;a++)
	{   int b = 1; 
		for(b=1;b<=a;b++)
		{
			printf("%d*%d=%-2d ",a , b, a*b);
		}
		printf("\n");
	}
	return 0;
}
