#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{		
	setlocale(LC_ALL,"portuguese");
	system("color f1");
	int n, i;
	char op;
	
	printf("\nEntre com um número para descobrir sua tabuada e informe qual operação"
	"matemática você deseja:\n+\t-\t*\t/\n");
	scanf("%i %c",&n,&op);
	
	switch(op)
	{
		case '+':
		for(i=1;i<11;++i)
		{
			printf("\n%i + %i = %i",n,i,n+i);
		}		
			break;
			
		case '-':
		for(i=1;i<11;++i)
		{
			printf("\n%i - %i = %i",n,i,n-i);
		}	
			break;

		case '*':
		for(i=1;i<11;++i)
		{	
			printf("\n%i * %i = %i",n,i,n*i);
		}	
			break;

		case '/':
		for(i=1;i<11;++i)
		{
			printf("\n%i / %i = %i resto = %i",n,i,n/i,n%i);
		}	
			break;
			
		default:
			printf("\nSinal Incorreto, tente novamente!");
			break;
	}
	
system("pause");
getchar();
return 0;	
}
