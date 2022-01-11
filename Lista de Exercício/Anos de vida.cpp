#include <stdio.h>

int main(void)
{
	char n;
	int id, tv=0;	
	
	printf("\nEntre com seu nome: ");
	scanf("%s",&n);		
	printf("\nEntre com sua idade: ");
	scanf("%i",&id);		

	tv=id*365;
	
	printf("\n%s de %i tem %i tempo de vida!",n,id,tv);
		
	getchar();
	return(0);
}
