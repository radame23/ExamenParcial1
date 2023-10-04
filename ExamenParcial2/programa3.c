//piramide de numeros
#include<stdio.h>

int main(){
	
	int i,j, filas;
	
	printf("De cuantas lineas quieres tu piramide?");
	scanf("%d", &filas);

	if(filas>60)
	{
		printf("no se puede hacer una piramide de muchas filas:), intenta otra vez ");
		
	} else
		{
			for(i=1;i<=filas; i++)
			{
				for(j=1;j<=i;j++)
				{
					printf("%d ", j);
				}
				
				printf("\n");
			}
		}
	
	return 0;
}
