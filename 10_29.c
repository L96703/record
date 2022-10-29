#include<stdio.h>

void Init(int arr[],int sz)
{
	int i = 0;
	for(i=0;i<sz;i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[],int sz)
{
	int i = 0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[],int sz)
{

	int i = 0;
	int j = 0;
	int left = 0;
	int right = sz-1;
	while(left < right)
	{
		i = arr[left];
		arr[left] = arr[right];
		arr[right] = i;
		left++;
		right--;
	}
}

/*
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	Print(arr,sz);
	Reverse(arr,sz);
	Print(arr,sz);
	Init(arr,sz);
	Print(arr,sz);
	
	
	return 0;
}
*/

/*
int main()
{
	int arr1[] = {1,3,5,7,9};
	int arr2[] = {2,4,6,8,10};	
	int sz = sizeof(arr1)/sizeof(arr1[0]);
	int tmp = 0;
	int i = 0;
	Print(arr1,sz);
	Print(arr2,sz);
	for(i=0;i<sz;i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	Print(arr1,sz);
	Print(arr2,sz);
}
*/
