#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"portuguese");
	system("color f2");
	int op;
	
	printf("\nDigite um n�mero entre 1 e 5:\n");
	scanf("%i",&op);
	
	switch(op)
	{
		case 1:
			printf("Um");
			break;
	
		case 2:
			printf("Dois");
			break;
			
		case 3:
			printf("Tr�s");
			break;
			
		case 4:
			printf("Quatro");
			break;
			
		case 5:
			printf("Cinco");
			break;
			
		default:
			printf("\nO valor � inv�lido e n�o est� no intervalo!");
			break;
	}

getchar();
return 0;	
}
