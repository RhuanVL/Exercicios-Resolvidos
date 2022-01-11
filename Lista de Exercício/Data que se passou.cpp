#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int d, m, data;
	
	printf("\nEntre com o dia hoje: ");
	scanf("%i",&d);
	printf("\nEntre com o mes de 2019: ");
	scanf("%i",&m);
	
	data=(m-1)*30+d;
	
	printf("\n%i",data);
	
	getchar();
	return 0;
}
