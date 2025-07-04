#include<stdio.h>
void main()
{
	int a=34;
	int b=45;
	int c=56;
	int d=78;
	printf("stmt_1 is a>c: %d\n",a<c);
	printf("stmt-2 is d<b: %d\n",d<b);
	printf("stmt_1 && stmt_2 :%d\n",(a<c),(d<b));
}