/*#include <stdio.h>
#include <string.h>

int main()
{
	//printf("%d\n",strlen("c:\\test\32\\test.c"));
	printf("%c\n",'\32');
	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int input = 0;
	printf("��Ϊ���˰�\n");
	printf("�Ƿ��Ϊ����?(1/0)>:");
	scanf("%d",&input);
	if (input == 0)
	printf ("����\n");
	else
	printf ("���ɷ�|n");
	
	return 0;
}
*/


/*#include<stdio.h>
int add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int num1,num2;
	sum = add(num1,num2);
	printf("sun=%d\n",sum);
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	while(i<10)
	{
		printf("%d",arr[i]);
		i++;
	}
return 0; 
}
