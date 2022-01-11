#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float x1, x2, y1, y2, d1;
	
	printf("\nEntre com o valor de x1: ");
	scanf("%f",&x1);
	printf("\nEntre com o valor de x2: ");
	scanf("%f",&x2);
	printf("\nEntre com o valor de y1: ");
	scanf("%f",&y1);
	printf("\nEntre com o valor de y2: ");
	scanf("%f",&y2);
	
	d1=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	
	printf("\nA distancia entre dois pontos: %.2f\n",sqrt(d1));
	
	system("PAUSE");
	getchar();
	return 0;
}
