#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	system("color f5");
	setlocale(LC_ALL,"portuguese");
	
	char s;
	
	printf("\nEntre com seu sexo, M[Masculino] e F[Feminino]:\n");
	s = getchar();
	
	if(s == 'M')
	{
		printf("\nSexo Masculino\n");
	}
	else if(s == 'F')
	{
		printf("\nSexo Feminino\n");
	}
	else 
	{
		printf("\nCaractere Incorreto, tente de novo\n");
	}
		
	system("pause");
	return 0;
}
