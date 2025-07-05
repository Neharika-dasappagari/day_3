#include<stdio.h>
int main()
{
	int d;
	int g;
	int h;
	int n;
	int stmt_1;
	int stmt_2;
	printf("enter the D value:");
	scanf("%d",&d);
	printf("enter the G value:");
	scanf("%d",&g);
	printf("enter the H value:");
	scanf("%d",&h);
	printf("enter the N value:");
	scanf("%d",&n);
	stmt_1=d!=h;
	stmt_2=n<=g;
	printf(" stmt_1is :%d\n",stmt_1);
	printf(" stmt_2 is:%d\n",stmt_2);
	printf("stmt_1||stmt_2 is :%d\n",stmt_1||stmt_2);
	return 5;
} 