#include <stdio.h>


int DigitSum(int num)
{
	if(num>9)
	{
		return DigitSum(num/10) + num%10;
	}
	else
	{
		return num;
	}
}


/*          //正确的 
int main()
{
	int num = 0;
	scanf("%d",&num);
	printf("%d\n",num);    //测试用 
	int count = DigitSum(num);
	printf("%d",count);
	return 0;
}
         //错误的 
int main()
{
	unsigned int num = 0;
	scanf("%d\n",&num);      //多了\n,所以输入完得等\n执行才会继续 
	printf("%d",num);
	int count = DigitSum(num);
	printf("%d",count);
	return 0;
}
*/

/*
int main()
{ printf("%d\n",sizeof(char));
  printf("%d\n",sizeof(short));
  printf("%d\n",sizeof(int));
  printf("%d\n",sizeof(long));
  printf("%d\n",sizeof(long long));
  printf("%d\n",sizeof(float));
  printf("%d\n",sizeof(double));
  return 0; 
}
*/

/*
int main()
{
	int i = 6;
	scanf("%d",&i);
	printf("%d\n",i);
}
*/

double Pow(int n,int k)
{
	if(k<0)
	{
		return(1.0/(Pow(n,-k)));
	}
	else if(k==0)
	{
		return 1;
	}
	else
	{
		return n*Pow(n,k-1);
	}
}

/*
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	double ret = Pow(n,k);
	printf("%lf\n",ret);
	return 0;
}
*/


