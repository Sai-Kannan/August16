#include<stdio.h>
int main()
{
	int n;
	printf("enter any number : \n");
	scanf("%d",&n);
	if(n&1)//and operation with 1
	printf("LSB IS set ");
	else
	printf("LSB is not set ");
}
