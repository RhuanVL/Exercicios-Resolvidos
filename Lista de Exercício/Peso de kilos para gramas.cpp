#include <stdio.h>

int main(void)
{
	float p;	
	
	printf("\nEntre com seu peso em kilos: ");
	scanf("%f",&p);	
	
	printf("\nO seu peso em gramas eh %.2f",p*1000);
	
getchar();
return 0;	
}
