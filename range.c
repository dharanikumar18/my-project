#include<stdio.h>


int main(int args,char*argv[])
{
	int n,n1;
	n1=0;
	printf("enter the value of n:");
       scanf("%d",&n);
while(n<=25)
{
n1=n1+2;
n++;
printf("%d",n1);
}
return 0;
}

