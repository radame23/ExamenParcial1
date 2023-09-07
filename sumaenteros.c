#include <stdio.h>

int main(){
	//Programa que suma N números enteros.
	int a;
	int b=0;
	int c=0;
	
	printf("Ingrese un numero, que se sumara con sus anteriores\n");
	scanf("%d",&a);
	
	while(c<=a)
	{
		b+=c;
		c++;
	}
	printf("la suma de los numeros anteriores es %d",b);
	return 0;
}
