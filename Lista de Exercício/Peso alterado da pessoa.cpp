#include <stdio.h>

int main(void)
{
	float p;
	
	printf("\nEntre com seu peso: ");
	scanf("%f",&p);
	
	printf("\nO novo peso ganho em 15%% eh %.2f e perdido em 20%% eh %.2f",p*1.15,p-(p*0.2));
	
getchar();
return 0;	
}
