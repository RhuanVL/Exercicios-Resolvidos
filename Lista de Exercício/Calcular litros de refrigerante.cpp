#include <stdio.h>

int main(void)
{
	float rl=350, rg1=600, rg2=2000, qtl, qtg1, qtg2, calc, calcl;
	
	printf("\nEntre com a quantidade de refrigerante lata - 350ml: ");
	scanf("%f",&qtl);
	printf("\nEntre com a quantidade de refrigerante garrafa - 600ml: ");
	scanf("%f",&qtg1);
	printf("\nEntre com a quantidade de refrigerante garrafa - 2l: ");
	scanf("%f",&qtg2);
	
	calc=rl*qtl+rg1*qtg1+rg2*qtg2;
	calcl=calc/1000;
	
	printf("\nO total do refrigerante em litros %.2f l.",calcl);
	
	getchar();
	return 0;
}
