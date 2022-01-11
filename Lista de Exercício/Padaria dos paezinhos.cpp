#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int p, b;
	float t;
	
	printf("\nEntre com a quantidade de pao consumido: ");
	scanf("%i",&p);
	printf("\nEntre com a quantidade de broa consumido: ");
	scanf("%i",&b);
	
	t=p*0.12+b*1.50;	
	
	printf("\nO total arrecadado eh: %.2f",t);	
	printf("\nO total a se poupar eh: %.2f",t*0.10);	
	
	getchar();
	return 0;
}
