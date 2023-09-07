#include <stdio.h>


int main()
{
	//Programa que recibe números hasta encontrar uno negativo
	int a;
	printf("INGRESA NUMEROS AL AZAR, SI ES NEGATIVO EL PROGRAMA ACABA \n");
	 while (a >= 0)
	{
        printf("Introduce un numero: ");
        scanf("%d", &a);

        if (a <= 0)
		{
            printf("FIN DEL PROGRAMA ");
        }
    } 

    return 0;

}
