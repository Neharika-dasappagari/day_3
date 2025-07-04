#include<stdio.h>
int main()
{
	int a;
	int b;
	int c,stmt_1,stmt_2;
	float d;
	printf("enter the A value :");
	scanf("%d",&a);
	printf("\n enter the B value:");
	scanf("%d",&b);
	printf("\n enter the C value:");
	scanf("%d",&c);
	printf("\n enter the D value:");
	scanf("%f",&d);
	stmt_1=a<b;
	stmt_2=c<d;
	printf("output of  stmt_1 is:%d\n",stmt_1);
	printf("outputof stmt_2 is :%d\n",stmt_2);
	printf("stmt_1&&stmt_2 is :%d\n",stmt_1&&stmt_2);
	return 3;
}