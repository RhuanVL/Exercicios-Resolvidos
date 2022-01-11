#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	float p, m, g, qtd;
	
	printf("\nEntre com a quantidade de camisetas pequena: ");
	scanf("%f",&p);
	
	printf("\nEntre com a quantidade de camisetas media: ");
	scanf("%f",&m);
	
	printf("\nEntre com a quantidade de camisetas grande: ");
	scanf("%f",&g);
	
	qtd=p*10+m*12+g*15;
	
	printf("\nO valor arrecadado eh: %.2f",qtd);
	
	getchar();
	return 0;
}
