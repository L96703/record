#include <stdio.h>
#include <assert.h>

int my_strlen(const char *str)
{
	assert(str != NULL);
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	printf("%d\n",my_strlen(arr));
	return 0;
}
