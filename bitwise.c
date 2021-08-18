#include<stdio.h>
int main()
{
	int a=-1,b=5;//0001 - 1110+1 =1111 &0101
	printf("%d",a&b);//0101 =5
	printf("%d",a|b);//1111=-1;
	printf("%d",a^b);//1010=-6;
	printf("%d",~b);//1010=-6;
}
