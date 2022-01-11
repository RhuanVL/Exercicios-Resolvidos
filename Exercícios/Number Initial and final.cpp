#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"portuguese");
	system("color 20");
	int ni, nf;

	printf("\nEntre com o número inicial e o final\n");
	scanf("%i %i",&ni,&nf);
	
	while(ni<nf)
	{
		printf("\n%i",ni);
		ni=ni+1;
	}

getchar();
return 0;	
}
