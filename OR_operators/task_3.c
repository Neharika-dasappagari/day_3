#include<stdio.h>
int main()
{
	int a=23;
	int b=34;
	int c=56;
	int d=89;
	printf("stmt_1 is a==b:%d\n",a<b);
	printf("stmt_2 is d!=c:%d\n",d>c);
	printf("stmt_1||stmt_2:%d\n",(a==b)||(d!=c));
	return 1;
}