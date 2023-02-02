#include<stdio.h>
main()
{
	int n,sum=0,first,last;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	last=n%10;

    while(n>=10){
	
		n=n/10;
		
	}
	first = n;
	sum = first + last ;
	printf("sum is: %d ", sum);
	
}
