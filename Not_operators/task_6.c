#include<stdio.h>
int main()
{
	int a;
	int b;
	int stmt=!(a==b);
	printf("enter the a value:");
	scanf("%d",&a);
	printf("enter the b value:");
	scanf("%d",&b);
	printf("stmt is :%d",stmt);
	return 2;
}