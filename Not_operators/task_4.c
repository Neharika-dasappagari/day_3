#include<stdio.h>
int main()
{
	int a=20;
	int b=34;
	int c=45;
	int d=56;
	int stmt_1=!(a=b);
	int stmt_2=!(d>=c);
	printf("stmt_1 is :%d\n",stmt_1);
	printf("stmt_2 is :%d\n",stmt_2);
	printf("stmt_1!stmt_2 :%d",stmt_1,stmt_2);
	return 1;
}