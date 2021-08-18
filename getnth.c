#include<stdio.h>
int main()
{
	int n,m;
	printf("enter any number : \n");
	scanf("%d",&n);
    printf("enter any bit u want : \n");
	scanf("%d",&m);
    m=1<<(m-1);// -1 is used to be user understandable
    if(n&m)//if result is 1 
    printf(" 1 ");
    else //if result is 0
    printf(" 0 ");
}
