#include<stdio.h>
int main()
{
	int n,m;
	printf("enter any number : \n");
	scanf("%d",&n);
    printf("enter any bit u want to clear : \n");
	scanf("%d",&m);
    n&=(~(1<<(m-1)));//bit wise not is used to change it to 0 
                     //otherwise we can shift 0 to required location
    printf("bit is clear, res is %d",n);
}
