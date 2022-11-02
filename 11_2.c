#include <stdio.h>

int main()
{
	int arr[3][3] = {{1,2,3},{4,6,8}};
	int min = 0;
	min = arr[0][0];
	int i = 0;
	int j = 0;
	printf("×îĞ¡Öµ\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			if(arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	printf("%d",min);
	return 0;
}
