#include<stdio.h>

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	
	while(n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}


int Fib2(int n)
{
	if(n<=2)
	  return 1;
    else
	  return Fib2(n-1) + Fib2(n-2);
	return n;
}

/*
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);
	printf("%d\n",ret);
}
*/

//汉诺塔问题；青蛙跳台阶问题

/*
void hnt(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("%c-->%c\n",a,c);
		n++;
	}
	else
	{
		hnt(n-1,a,c,b);
		printf("%c-->%c\n",a,c);
		n++;
		hnt(n-1,b,a,c);
	}
}

int main()
{
	int n;
	int ret = 0;
	scanf("%d",&n);
	ret = hnt(n,'a','b','c');
	printf("%d\n",ret);
}
*/      //废品

int fbnq(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while(n>2)
	{
	  c = a + b;
	  a = b;
	  b = c;
	  n--;
    }
    return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = fbnq(n);
	printf("%d\n",ret);
}
 
