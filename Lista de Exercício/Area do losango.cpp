#include <stdio.h>

int main(void)
{
	float D, d, a;
	
	printf("\nEntre com a diagonal maior do losango: ");
	scanf("%f",&D);
	printf("\nEntre com a diagonal menor do losango: ");
	scanf("%f",&d);
	
	a=(D*d)/2;
	
	printf("\nA area do losango eh %.2f",a);
		
getchar();
return 0;	
}
