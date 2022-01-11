#include <stdio.h>

//Sera usado Teorema de Tales para descobrir altura de prédio

int main(void)
{
	float s1, s2, h, h2;
	
	printf("\nEntre com a sua altura: ");
	scanf("%f",&h);
	printf("\nEntre com a distancia da sua sombra: ");
	scanf("%f",&s1);
	printf("\nEntre com a distancia da sombra do predio: ");
	scanf("%f",&s2);
	
	h2=(s2/s1)*h;	
	
	printf("\nA altura do predio eh %.2f m.",h2);
	
	getchar();
	return 0;
}
