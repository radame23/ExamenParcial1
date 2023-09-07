#include <stdio.h>


int main()
{
//Programa que imprime 10 números
	int n;
	int a=1;
	printf("apartir de que numero desea sumar 10 numeros mas?\n");
	scanf("%d", &n);
	printf("\n");
	while (a<11){
		printf("%d\n\n", n + a);
		a++;
	}
	
	return 0;
}
