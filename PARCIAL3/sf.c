#include <stdio.h>

long long int seriefibonacci(long long int n){
	if(n==0)
	{
		return 0;
	} else 
	if(n==1)
	{
		return 1;
	}
	else
	{
		return seriefibonacci(n-1)+seriefibonacci(n-2);
	}
}

int  main()
{
	long long int num,i;
	printf("numero de elementos de la serie fibonacci:");
	scanf("%lld",&num);
	printf("elementos de la serie:\n");
	for(i=0; i<=num; i++)
	{
	printf("%lld  ",seriefibonacci(i));	
	}
	
	return 0;
}
