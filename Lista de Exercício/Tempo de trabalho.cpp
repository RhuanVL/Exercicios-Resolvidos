#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int dias, ano, meses;
	
	printf("\nEntre com a quantidade de dias de trabalho: ");
	scanf("%i",&dias);
	
	ano=dias/365;
	meses=dias/30;
	dias=dias%30;
	
	printf("\nEntao o tempo em \nanos: %i\t\tmeses: %i\tDias: %i",ano,meses,dias);
	
	getchar();
	return 0;
}
