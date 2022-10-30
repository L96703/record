#include<stdio.h>
/*
int main()
{
	int log = 0;
	int sum = 1;
	scanf("%d\n",&log);
	while (log <= 10)
	{
		log++; 
		sum = sum * log; 
	}
	printf("sum = %d\n", sum);
	return 0;
}
*/
/*
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n=1;n<=3;n++)
	{
		ret = 1;
		for(i=1;i<=n;i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
printf("sum = %d\n",sum);
return 0;
}
*/

int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
		for(i=1;i<=4;i++)
		{
			ret = ret * i;
			sum = sum + ret;
	    }
printf("sum = %d\n",sum);
return 0;
}
