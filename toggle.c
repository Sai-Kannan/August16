#include<stdio.h>
int main()
{
	int n,m;
	printf("enter any number : \n");
	scanf("%d",&n);
    printf("enter any bit u want to toggle : \n");
	scanf("%d",&m);
    n^=1<<(m-1);//xor operation is used to change if bet is 1 to 0 and viceversa
    printf("bit is toggled, res is %d",n);
}
