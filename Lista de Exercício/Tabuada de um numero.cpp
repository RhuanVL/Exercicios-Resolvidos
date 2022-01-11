#include <stdio.h>

//Tabuada das contas Básicas usando for.

int main(void)
{
	int i, n;
	
	printf("\nEntre com o numero para saber sua tabuada: ");
	scanf("%i",&n);
	
	printf("\nTabuada da Multiplicacao\n");
	for(i=1;i<=10;i++)
	{printf("\n%i X %i = %i",n,i,n*i);}
	
	printf("\n\n");
	
	printf("\nTabuada da Adicao\n");
	for(i=1;i<=10;i++)
	{printf("\n%i + %i = %i",n,i,n+i);}
	
	printf("\n\n"); 
	
	printf("\nTabuada da Subtracao\n");
	for(i=1;i<=10;i++)
	{printf("\n%i - %i = %i",n,i,n-i);}
	
	printf("\n\n");
	
	printf("\nTabuada da Divisao\n");
	for(i=1;i<=10;i++)
	{printf("\n%i / %i = %i",n,i,n/i);}
	
getchar();
return 0;	
}
