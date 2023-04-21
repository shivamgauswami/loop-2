#include<stdio.h>

main()
{
	int a=1,n,fact=1;
	
	printf("enter your value =");
	scanf("%d",&n);
	
	do
	{
		fact=fact*a;
		a++;
	}
	while(a<=n);
	
	printf("%d",fact);
}
