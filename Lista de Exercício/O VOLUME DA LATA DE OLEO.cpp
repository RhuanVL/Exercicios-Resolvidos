#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	float v,r,a;
	
	printf("\nEntre com o valor do raio: ");
	scanf("%f",&r);
	printf("\nEntre com o valor da area: ");
	scanf("%f",&a);
	
	v=3.14159*r*a;
	
	printf("\nO volume da lata de oleo eh: %.2f\n",v);	
		
	system("pause");
	return 0;
}
