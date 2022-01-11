#include <stdio.h>

int main(void)
{
	int sf, sm;
	
	printf("\nEntre com o salario minimo: ");	
	scanf("%i",&sm);
	printf("\nEntre com o salario do funcionario: ");	
	scanf("%i",&sf);
	
	printf("\nO funcionario recebe %i salario(s) minimo",sf/sm);
	
getchar();	
return 0;	
}
