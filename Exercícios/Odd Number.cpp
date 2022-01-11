#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"portuguese");
	system("color f8");
	
	int n, i;
	
	for(n=100;n<200;++n)
	{
		if(n%2==1)
		{	printf("\nNúmeros ímpares = %i\n",n);}
	}	
	
system("pause");
getchar();
return 0;	
}
