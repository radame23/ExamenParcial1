//a�o bisiesto 
#include <stdio.h>

int main(){
	
	int a=0;
	
	printf("Introduce un a�o:");
	scanf("%d", &a);
	
	while(!((a%4==0 && a%100!=0 && a>0) || a%400==0 ))
	{
		printf("este a�o no es bisiesto\n\n");
		printf("vuelve a poner otro a�o\n\n");
		scanf("%d", &a);
	}
	
			printf("esta a�o si es bisiesto\n");
	
		
	return 0; 
}

