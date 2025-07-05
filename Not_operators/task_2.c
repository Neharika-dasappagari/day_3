#include<stdio.h>
int main()
{
	int a=20;
	int b=20;
	int stmt_1=!(a=b);
	printf("stmt_1 is :%d",stmt_1);
	return 1;
}