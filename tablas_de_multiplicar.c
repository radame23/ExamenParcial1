#include <stdio.h>


int main()
{
	//Programa que obtiene la tabla de multiplicar de un número
	int a;
	int b=1;
	printf("de que numero desea saber su tabla de multiplicar (del 1 al 10):? \n");
	scanf("%d",&a);
	printf("Tabla de multiplicar del %d \n" , a);
	while(b<=10)
	{
	
		printf(": %d \n", a*b++);
		
	}
		return 0;
}
