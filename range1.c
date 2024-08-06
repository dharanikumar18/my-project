#include<stdio.h>

int main()
{
	int n,n1;
	printf("enter the value of n,n1:");
	scanf("%d%d",&n,&n1);
	
	
		if(n%2==0)
		{
			while(n<=n1)
			{
				n=n+2;
				printf("%d\n",n);
			}
		}
		else
		{
			n=n+1;
			while(n<=n1){
				n=n+2;
				printf("%d\n",n);
			}
		}
		return 0;
	}

