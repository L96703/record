#include <stdio.h>

void bubble_sort(int arr[],int sz)   //Ƿȱ?Ż? 
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
    {
    	int j = 0;
    	int flag = 1;
    	for(j = 0;j < sz-1-i;j++)
    	{
    		int tmp = arr[j];
    		arr[j] = arr[j + 1];
    		arr[j + 1] = tmp;
    		flag = 0;
		}
		if(flag ==1)
		{
			break;
		}
	}
}

int main()
{
	int arr [] = {9,8,7,4,5,6,3,1,2,0};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	for(i = 0;i < sz;i++)
	{
		printf("%  d",arr[i]);
	}
	return 0;
}
