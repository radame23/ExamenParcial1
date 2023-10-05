//intercambio de valores 
#include <stdio.h>

int main(){
	
	int a,b,c,temp;
	printf("inserta el primer valor: ");
	scanf("%d", &a);
	printf("inserta el segundo valor: ");
	scanf("%d", &b);
	printf("inserta el tercer valor: ");
	scanf("%d", &c);
	
	printf("valor 1: %d\n",a);
	printf("valor 2: %d\n",b);
	printf("valor 3: %d\n\n",c);
 
 	temp=c;
 	c=b;
 	b=a;
 	a=temp;
 
	printf("nuevo valor 1: %d\n",a);
	printf("nuevo valor 2: %d\n",b);
	printf("nuevo valor 3: %d\n",c);
	
}
