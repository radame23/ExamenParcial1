//multiplos de 3 
#include <stdio.h>

int main(){
	int a;
	printf("multiplos del 1 al 100");
	for (a=0;a<=100;a++)
	{
		if(a%3==0)
		{
			printf("%d es multiplo de 3\n",a);
		}
		if(a%3!=0)
		{
			printf("%d no es multiplo de 3\n",a);
		}
		
	}
	return 0;
}
