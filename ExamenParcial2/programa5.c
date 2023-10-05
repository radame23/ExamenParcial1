//año bisiesto 
#include <stdio.h>

int main(){
	
	int a=0;
	
	printf("Introduce un año:");
	scanf("%d", &a);
	
	while(!((a%4==0 && a%100!=0 && a>0) || a%400==0 ))
	{
		printf("este año no es bisiesto\n\n");
		printf("vuelve a poner otro año\n\n");
		scanf("%d", &a);
	}
	
			printf("esta año si es bisiesto\n");
	
		
	return 0; 
}

