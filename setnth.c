#include<stdio.h>
int main()
{
	int n,m;
	printf("enter any number : \n");
	scanf("%d",&n);
    printf("enter any bit u want to set : \n");
	scanf("%d",&m);
    m=1<<(m-1);
    n=n|m;//or operation is used to set the bit
    printf("bit is set, res is %d",n);
}
