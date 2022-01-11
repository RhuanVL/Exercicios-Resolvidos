#include <stdio.h>

int main(void)
{
	int dn, ano, ia, im, id, is;
	
	printf("\nEntre com sua data de nascimento: ");
	scanf("%i",&dn);
	printf("\nEntre com o ano atual: ");
	scanf("%i",&ano);
	
	ia=ano-dn;
	im=ia*12;
	id=ia*365;
	is=ia*48;
	
	printf("\nIdade em anos %i\nIdade em meses %i\nIdade em dias %i\nIdade em semanas %i",ia,im,id,is);
	
getchar();
return 0;	
}
