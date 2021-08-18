#include<stdio.h>
int main()
{
	int n,msb=0;
	printf("enter any number : \n");
	scanf("%d",&n);
	msb=(1<<31);//1 is left shifted by 31
	if(n&msb)//if negative num is given msb is set
	printf("MSB IS set ");
	else
	printf("MSB is not set ");
}
