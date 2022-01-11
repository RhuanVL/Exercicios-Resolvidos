#include <stdio.h>

int main(void)
{
	float a=0, B, b, h;
	
	printf("\nEntre com a base maior do trapezio: ");
	scanf("%f",&B);
	printf("\nEntre com a base menor do trapezio: ");
	scanf("%f",&b);
	printf("\nEntre com a altura do trapezio: ");
	scanf("%f",&h);
	
	a=((B+b)*h)/2;
	
	printf("\nA area do trapezio eh %.2f",a);
	
getchar();
return 0;	
}
