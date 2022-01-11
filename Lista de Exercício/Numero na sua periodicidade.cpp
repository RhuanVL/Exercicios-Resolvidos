#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int c=0, d=0, u=0; 
	int n;
	
	printf("\nEntre com um numero: ");
	scanf("%i",&n);
	
	c=n/100;
	d=n/10;
	u=n%10;
	
	printf("\nO numero %i = Centena - %i\tDezena - %i\tUnidade - %i",n,c,d,u);
	
	getchar();
	return 0;
}
