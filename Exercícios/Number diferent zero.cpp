#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	system("color f4");
	setlocale(LC_ALL,"portuguese");
	
	int n, c=0;
	
	printf("\nEntre com numero inteiro e pare digitando zero:\n");
	while(n!=0)
	{
		scanf("%i",&n);
		c=n+c;
	}
	printf("\n%i\n",c);
	
	getchar();
	system("pause");
	return 0;
}
