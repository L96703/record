#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main()
{
	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		int j = 0;
		for (j=1;j<=i;j++)      //ret为初始化 
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n",sum);
	return 0;
}
*/

/*
int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (i=0;i<=12;i++)
	{
		printf("hehe\n");       //死循环，为何？ 
		arr[i] = 0;
	}
	system ("pause");
	return 0;
}
*/


void my_strcpy(char* dest,char* src)
{
	while(*src != '\0')
	{
		*dest = *src;         //优化 
		src++;
		dest++;
	}
	*dest = *src;
}

int main()
{
	char arr1[] = "#############";
	char arr2[] = "bit";
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
}
*/

/*
void my_strcpy(char* dest,char* src)
{
	while(*dest++ = *src++)
	{
		;          //再优化 
	}
}
*/

/*
void my_strcpy(char* dest,char* src)
{
	if(dest != NULL && src != NULL)
	{
		while(*dest++ = *src++)
		{
			;          
		}
	}
}
*/

/*
#include <assert.h>
void my_strcpy(char* dest,char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	while(*dest++ = *src++)
	{
		;          
	}
}
*/

/*
#include <assert.h>
void my_strcpy(char* dest,const char* src)     //const 修饰的常变量  
{
	assert(dest != NULL);
	assert(src != NULL);
	while(*dest++ = *src++)
	{
		;          
	}
}
*/

/*
#include <assert.h>
char* my_strcpy(char* dest,const char* src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符 
	while(*dest++ = *src++)
	{
		;          
	}
	return ret;
}

int main()
{
	char arr1[] = "#############";
	char arr2[] = "bit";
	printf("%s\n",my_strcpy(arr1,arr2));
	return 0;
}
*/
