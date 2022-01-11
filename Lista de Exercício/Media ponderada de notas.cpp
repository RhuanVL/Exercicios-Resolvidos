#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float n1, n2, n3, m=0;
	
	printf("\nEntre com a nota 1: ");
	scanf("%f",&n1);
	printf("\nEntre com a nota 2: ");
	scanf("%f",&n2);
	printf("\nEntre com a nota 3: ");
	scanf("%f",&n3);
	
	m=(n1*1+n2*2+n3*3)/6;
	
	printf("\nA media ponderada das notas eh: %.2f",m);
	
	getchar();
	return 0;
}
