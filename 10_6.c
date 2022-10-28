#include <stdio.h>
/*
int main()
{
	int n = 0;
	int sum = 1;
	for(n = 1;n <= 3;n++)
	{
		sum = sum * n;
	}
	printf("%d\n",sum);
	return 0;
}
*/
/*
int main()
{
	int n = 0;
	int sum = 1;
	int jc = 0;
	for(n = 1;n <= 3;n++)
	{
		sum = sum * n;
		jc = jc +sum;
	}
	printf("%d\n",jc);
	return 0;
}
*/
/*
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 17;
	int left = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int right = sz-1;
	while(left<=right)
	{
	    int sum = (left+right)/2;
	    if(sum>k)
	    {
		   right = sum-1;
	    }
	    if(sum<k)
	    {
		   left = sum+1;
	    }
	    else if(sum=k) 
	    {
	       sum--;
		   printf("%d\n",sum);
		   break;
	    }
    }
    if(left > right)
    {
    	printf("’“≤ªµΩ\n");
	}
	return 0;
}
*/
int main()
{
	char arr1[] = "megurine ruka";
	char arr2[] = "#############";
	int left = 0;
	int right = sizeof (arr1)/sizeof (arr2[0])-2;
	while(left<=right)
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		Sleep(500);
		system("cls");
		left++;
		right--; 
	}
	printf("%s\n",arr2);
	return 0;
}
