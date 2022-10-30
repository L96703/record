#include<stdio.h>
/*
int main()
{
	int age;
	scanf("%d",&age);
    if(age<18)
	printf("小学生\n");
	if(age>=18&&age<33)
	printf("青年\n");
	if(age>=33&&age<55)
    printf("壮年\n");
	if(age>=55&&age<90)
	printf("老年\n");
	if(age>=90)
	printf("老不死\n");
}
*/
/*
int main()
{
	int age = 1;
    if(age<18)
	printf("小学生\n");
	if(age>=18&&age<33)
	printf("青年\n");
	if(age>=33&&age<55)
    printf("壮年\n");
	if(age>=55&&age<90)
	printf("老年\n");
	if(age>=90)
	printf("老不死\n");
}
*/
/*
void main()
{
	int i;
	i = 1;
	while(i<=100)
	{
		if(i%2 == 1)
		  printf("%d",i);
		i++;
    }
    return 0; 
}
*/
/*
int main()
{
	int day = 0;
	scanf("%d",&day);
	switch(day)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日\n");
			break;
		case 6:
		case 7:
			printf("休息日\n");
			break;
		default:
			printf("输入错误\n");
			break;
	}
	return 0;
}
*/
int main()
{
	int n = 1;
	int m = 2;
	switch(n)
	{
		case 1:n++;
		case 2:m++;
		case 3:
			switch(n)
			{
				case 1:n++;
				case 2:m++,
			           n++;
					   break;	
			}
		case 4:m++;
		break;
		default:
	    break;
	}
	printf("m = %d,n = %d\n", m , n);
	return 0;
}
