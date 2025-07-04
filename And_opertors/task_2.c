#include<stdio.h>
void main()
{
	int a=12;
	int b=23;
	int c=45;
	int d=56;
	printf("stmt_1 is a>c: %d\n",a<c);
	printf("stmt-2 is d<b: %d\n",d<b);
	printf("stmt_1 && stmt_2 :%d\n",(a<c),(d<b));
}