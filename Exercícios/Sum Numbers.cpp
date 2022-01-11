#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	int n, i;
	system("color f2");
	setlocale(LC_ALL,"portuguese");
	printf("\nEntre com 10 numeros inteiros:\n");
	
	for(i=0;i<10;++i)
	{
		scanf("%i",&n);
		n=n+i;
	}
	printf("\nA soma dos números é %i\n",n);
	
	getchar();
	system("pause");
	return 0;
}
