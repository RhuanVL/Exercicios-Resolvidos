#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float v, pl, res=0;
	
	printf("\nEntre com o preco da gasolina: ");
	scanf("%f",&v);
	printf("\nEntre com quantos litros vc deseja por no tanque: ");
	scanf("%f",&pl);
	
	res=pl*v;
	
	printf("\nVc conseguiu colocar %.2f",res);
	
	getchar();
	return 0;
}
