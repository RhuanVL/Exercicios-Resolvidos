#include <stdio.h>
#include <math.h>

int main(void)
{
	float c1, c2, h;
	
	printf("\nEntre com cateto 1 e cateto 2 do triangulo: ");
	scanf("%f %f",&c1,&c2);
	
	h=(c1*c1)+(c2*c2);
	h=sqrt(h);
	
	printf("\nA hipotenusa do triangulo eh %.2f",h);
	
getchar();
return 0;	
}
