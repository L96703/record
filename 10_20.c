#include <stdio.h>

/*
int main()
{
	int a = 5;
	int b = 3;
	a = a * b;
	b = a / b;
	a = a / b;
	printf("%d %d",a,b);
}
*/

/*
int main()
{
	int arr[] = {1,2,3,4,5,1,2,3,4};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		int j = 0;
		int count = 0;
		for(j=0;j<sz;j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
			}
		}
		if(count == 1)
		{
			printf("%d\n",arr[i]);
			break;
		}
	}
	return 0;
}
*/

/*
int main()
{
	int arr[] = {1,2,3,4,5,1,2,3,4};
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		ret = ret^arr[i];
	}
	printf("%d\n",ret);
	return 0;
}
*/


