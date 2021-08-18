#include<stdio.h>
int main()
{
	int n,m;
	printf("enter any two numbers : \n");
	scanf("%d%d",&n,&m);//to swap the numbers just we can do xor operation
	n=n^m;
	m=n^m;
	n=m^n;
	printf("%d %d",n,m);
}
