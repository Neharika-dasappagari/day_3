#include<stdio.h>
int main()
{
	int a=56;
	int b=45;
	int c=89;
	int d=90;
	printf("stmt_1 is a<b:%d\n",a<b);
	printf("stmt_2 is d>c:%d\n",d>c);
	printf("stmt_1||stmt_2:%d\n",(a<b)||(d>c));
	return 4;
}