#include <stdio.h>

int main(void)
{
	int fq=2, fp=1, h=1, qts, calc1, calc2, calc3;
	
	printf("\nEntre com a quantidade de sanduiches para serem feitos: ");
	scanf("%i",&qts);
	
	calc1=(fq*100)*qts;
	calc2=(fp*100)*qts;
	calc3=(h*600)*qts;
	
	printf("\nQuantidade de Sanduiches %i\nQueijo Necessario: %i g\nPresunto necessario: %i g\nHamburguer necessario: %i g",qts,calc1,calc2,calc3);
	
	getchar();
	return 0;
}
