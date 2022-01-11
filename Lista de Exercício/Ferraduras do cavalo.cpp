#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int f=0, c;
	
	printf("\nEntre com o numero de cavalos: ");
	scanf("%i",&c);
	
	f=c*4;
	
	printf("\nA quantidade de ferraduras eh: %i",f);
	
	getchar();
	return 0;
}
