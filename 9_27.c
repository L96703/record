#include<stdio.h>
/*int main()*/
/*
{
	double d = 3.14;
	double* pd = &d;
	printf("%d\n",sizeof(pd));
	return 0;
}
*/
/*
{
	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(long*));
	printf("%d\n",sizeof(int*));
	printf("%d\n",sizeof(double*));
	return 0;
}
*/

#include<string.h>
struct Book
{
	char name[10];
	short price;
};

int main()
{
	struct Book b1 ={"CCTV",22};
	strcpy(b1.name,"NIU");
	printf("%s\n",b1.name);
	//printf("书名：%s\n",b1.name);
	//printf("价格:%d元\n",b1.price);
	return 0;
}
