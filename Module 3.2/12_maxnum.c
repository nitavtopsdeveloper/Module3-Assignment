#include<stdio.h>
main()
{
	int n, m, r, max;
	
	printf("Enter Number:");
	scanf("%d",&n);
	
	m=n;
	max=0;
	
	while(m!=0)
	{
		r=m%10;
		if(r>max)
		max=r;
		m=m/10;
		
	}
	printf("\n%d is maximum number in %d",max,n);
}
