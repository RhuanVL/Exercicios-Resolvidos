#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"portuguese");
	system("color f2");
	int op;
	
	printf("\nDigite um número entre 1 e 5:\n");
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
			printf("Três");
			break;
			
		case 4:
			printf("Quatro");
			break;
			
		case 5:
			printf("Cinco");
			break;
			
		default:
			printf("\nO valor é inválido e não está no intervalo!");
			break;
	}

getchar();
return 0;	
}
