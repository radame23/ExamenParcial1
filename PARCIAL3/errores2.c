#include <stdio.h>

float perimetroFigura(float numero)
{
	float perimetro;
	perimetro=4*numero;
	return perimetro;
}
float areaFigura(float numero)
{
	float area;
	area=numero*numero;
	return area;
}
int main()
{
	int num;
	printf("Lado de un cuadrado: ");
	scanf("%d",&num);
	printf("Perimetro: %.2f\n",perimetroFigura(num));
	printf("Area: %.2f\n",areaFigura(num));
}
