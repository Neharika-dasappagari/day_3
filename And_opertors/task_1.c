#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int c=40;
	int d=60;
	printf("stmt_1is a<b: %d\n",a<b);
	printf("stmt_2 is d>c: %d\n",d>c);
	printf("stmt_1 && stmt_2:%d\n",(a<b)&&(d>c));
}
	