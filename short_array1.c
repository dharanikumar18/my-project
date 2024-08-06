#include<stdio.h>
int main()
{
	int arr[]={6,7,8,9,10,11,13,14,15,17},i=0,res,deff=arr[0];
	while(i<10)
	{
		if(arr[i]-i!=deff)
		{
			printf("%d",arr[i]-1);
			deff=deff+1;
		}
		i++;
		
	}
	return 0;
}
