#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"portuguese");
	system("color 05");
	int n1, n2;
	char op;
	
	printf("\nEntre com o 1.o e 2.o numeros e informe qual operação matemática você deseja:"
	"\n+\t-\t*\t/\n");
	scanf("%i %i %c",&n1,&n2,&op);
	
	switch(op)
	{
		case '+':
			printf("\n%i + %i = %i\n",n1,n2,n1+n2);
			break;
			
		case '-':
			printf("\n%i - %i = %i\n",n1,n2,n1-n2);
			break;

		case '*':
			printf("\n%i * %i = %i\n",n1,n2,n1*n2);
			break;

		case '/':
			printf("\n%i / %i = %i\n",n1,n2,n1/n2);
			break;
			
		default:
			printf("\nValor Incorreto, tente novamente!");
			break;
	}
	
getchar();
return 0;	
}
