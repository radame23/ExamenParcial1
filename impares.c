#include <stdio.h>

int main() {
	//Programa que obtiene los impares de una lista de enteros.
    int a;
	int b=1;
    printf("Ingresa hasta que numero quieres llegar ");
    scanf("%d", &a);
	
	while(b <= a)
	{
		printf("los numeros impares hasta el %d son %d\n",a,b);
   		b+=2;
	}
   		
    return 0;
}






