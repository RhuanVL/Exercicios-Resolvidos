#include <stdio.h>

int main(void)
{
	float p;
	
	printf("\nEntre com o preco do produto: ");
	scanf("%f",&p);
	
	printf("\nO produto com desconto de 10%% eh %.2f",p-(p*0.1));
	
getchar();
return 0;	
}
