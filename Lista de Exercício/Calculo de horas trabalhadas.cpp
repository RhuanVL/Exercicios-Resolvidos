#include <stdio.h>

int main(void)
{
	float ht=10.00, he=15.00, htr, hte, calc,calcd;
	
	printf("\nEntre com a horas normais trabalhadas: ");
	scanf("%f",&htr);
	printf("\nEntre com a horas extras trabalhadas: ");
	scanf("%f",&hte);
	
	calc=(ht*htr)+(he*hte);
	calcd=calc-(calc*0.1);
	
	printf("\nO salario bruto eh: %.2f\nSalario liquido eh: %.2f",calc,calcd);
	
	getchar();
	return 0;
}
