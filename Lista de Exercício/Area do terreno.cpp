#include <stdio.h>

int main(void)
{
	float b, h, a;
		
	printf("\nEntre com a base: ");
	scanf("%f",&b);	
		
	printf("\nEntre com a altura: ");
	scanf("%f",&h);	
	
	a=b*h;
	
	printf("\nA area eh: %.2f",a);
	
	getchar();
	return 0;
}
