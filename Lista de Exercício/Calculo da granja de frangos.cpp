#include <stdio.h>

int main(void)
{
	float f, ci=4.00, ca=3.50*2, calc;
	
	printf("\nEntre com a quantidade de frango para a granja: ");
	scanf("%f",&f);
	
	calc=(ci+ca)*f;
	
	printf("\nO total para marcar o frango eh %.2f",calc);
	
	getchar();
	return 0;
}
