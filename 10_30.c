#include <stdio.h>

/*
int count_bit_one(unsigned int n)
{
	int count = 0;
	while(n)
	{
		if(n%2 == 1)
		{
			count++;
		}
		n = n/2;
	}
	return count;
}

int Count_bit_one(int n)
{
	int count = 0;
	int i = 0;
	for(i=0;i<32;i++)
	{
		if(((n>>i)&1)==1)
		{
			count++;
		}
	}
	return count;
}

int COunt_bit_one(int n)
{
	int count = 0;
	while(n)
	{
		n = n&(n-1);
		count++;
	}
	return count;
}

int get_diff_bit(int m,int n)
{
	int tmp = m^n;
	return COunt_bit_one(tmp);	
}

/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	int count = get_diff_bit(a,b);
	printf("%d",count);
	return 0;	
}
*/

/*
void print(int m)
{
	int i = 0;
	printf("奇数位:\n");
	for(i=30;i>=0;i-=2)
	{
		printf("%d ",(m>>i)&1);
	}
	printf("\n");
	printf("偶数位:\n");
	for(i=31;i>=1;i-=2)
	{
		printf("%d ",(m>>i)&1);
	}
	printf("\n");
}

/*
int main()
{
	int m = 0;
	scanf("%d",&m);
	print(m);
	return 0;
}
*/

/*

#include <string.h>

int my_strlen(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char arr[])
{
	int left = 0;
	int right = my_strlen(arr)-1;
	while(left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

void Reverse_string(char arr[])
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len-1];
	arr[len-1] = '\0';
	if(my_strlen(arr+1)>=2)
	{
		reverse_string(arr+1);
	}
	arr[len-1] = tmp;
}

/*
int main()
{
	char arr[] = "abcdef";
	Reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}
*/


/*           //
int DigitSum(unsigned int num)
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


int main()
{
	unsigned int num = 0;
	scanf("%d\n",&num);
	int count = DigitSum(num);
	printf("%d",count);
	return 0;
}
/*           //跑不动 

/*            //
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

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d\n",&n,&k);
	double ret = Pow(n,k);
	printf("%lf\n",ret);
	return 0;
}
*/               //跑不动
//原因未知 
