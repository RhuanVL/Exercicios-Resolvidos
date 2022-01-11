#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float r, a, pi=3.14;
	
	printf("\nEntre com o raio da pizza: ");
	scanf("%f",&r);
	
	a=pi*(r*2);
	
	printf("\nA area da pizza eh: %.2f",a);
	
	getchar();
	return 0;
}
