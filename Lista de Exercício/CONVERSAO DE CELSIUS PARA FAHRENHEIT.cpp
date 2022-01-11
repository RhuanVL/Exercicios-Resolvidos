#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float f, c;
	
	printf("\nEntre com a temperatura em Celsius: ");
	scanf("%f",&c);
	
	f=(9*c+160)/5;
		
	printf("\nA conversao em Fahrenheit eh %.2f\n",f);
		
	system("pause");
	return 0;
}
