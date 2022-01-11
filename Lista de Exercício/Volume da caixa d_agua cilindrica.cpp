#include <stdio.h>

int main(void)
{
	float pi=3.14*2, a, v=0;
	
	printf("\nEntre com a altura da caixa dagua: ");
	scanf("%f",&a);
	
	v=pi*a;
	
	printf("\nO volume da caixa dagua eh %.2f",v);
	
	getchar();
	return 0;	
}
