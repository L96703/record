#include <stdio.h>
/*
int main()
{
	int a1,a2,a3 = 258;
	a1 = 97;
	a2 = 98;
	printf("a1=%c,a2=%c,a3=%c\n",a1,a2,a3);
}
*/
/*
int main()
{	
	int x=10,y=20,m,n;
	m=x++;
	n=++y;
	printf("x=%d,y=%d,m=%d,n=%d\n",x,y,m,n);
	m=x--;
	n=--y;
	printf("x=%d,y=%d,m=%d,n=%d\n",x,y,m,n);
}
*/
/*
void main()
{ char a = 0x95,b,c;
b = (a&0xf)<<4;
c = (a&0xf0)>>4;
a = b|c;
printf("%x\n",a);
}
*/
/*
int main()
{
	int a = 3;
	double b = 1.5;
	printf("%f",(4*a*a)+(5*b*b*b));
} 
*/

/*
int main()
{
int n,x,y,z;
printf("请输入一个三位正整数: ");
scanf("%d",&n);
x = n/100; 
y = (n%100)/10; 
z = n%10; 
int k;
k = x+y+z;
printf("%d\n",k);
}
*/

/*
int main()
{
int a=10;
a+=a-=a*=a;
printf("a=%d\n",a);
}
*/

/*
#include <math.h>
int main()
{
double a,b,c,area,s;
printf("请输入三个边长a,b,c:");
scanf("%lf%lf%lf",&a,&b,&c);
s=(a+b+c)/2.0;
area= sqrt(s*(s-a)*(s-b)*(s-c));
printf("area=%lf\n",area);
}
*/

int main()
{
int n,x,y,z;
printf("请输入正整数: ");
scanf("%d",&n);
x = n/3600;
y = (n%3600)/60;
z = n%60;
printf("%d,%d,%d\n",x,y,z);
}
