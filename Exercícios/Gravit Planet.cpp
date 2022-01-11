#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	system("color f1");
	setlocale(LC_ALL, "Portuguese");
	float pesoT, pesoP;
	int op;
	
	printf("\t\n///////////////////Gravit Planet\\\\\\\\\\\\\\\\\\\\\\\\");
	printf("\n\n");
	printf("\n\tEntre com seu peso na terra:\n");
	scanf("%f",&pesoT);	
	fflush(stdin);
	
	printf("\n\tInsira o número do planeta com sua respectiva gravidade para converter seu peso"
	"\n\t1 - Mercúrio\n\t2 - Vênus\n\t3 - Marte\n\t4 - Júpiter\n\t5 - Saturno\n\t6 - Urano\n");
	scanf("%i",&op);
	system("cls");
	system("color f4");
	
	switch(op)
	{
		case 1:
			pesoP=pesoT/10*0.37;
			printf("\nSeu peso em Mercurio é %.2f\n",pesoP);
			break;
			
		case 2:
			pesoP=pesoT/10*0.88;
			printf("\nSeu peso em Vênus é %.2f\n",pesoP);
			break;
			
		case 3:
			pesoP=pesoT/10*0.38;
			printf("\nSeu peso em Marte é %.2f\n",pesoP);
			break;
			
		case 4:
			pesoP=pesoT/10*2.64;
			printf("\nSeu peso em Júpiter é %.2f\n",pesoP);
			break;
			
		case 5:
			pesoP=pesoT/10*1.15;
			printf("\nSeu peso em Saturno é %.2f\n",pesoP);
			break;
			
		case 6:
			pesoP=pesoT/10*1.17;
			printf("\nSeu peso em Urano é %.2f\n",pesoP);
			break;
			
		default:
			printf("\nValor Incorreto, Tente novamente!");
			break;
		
	}
	
	getchar();
	return 0;
}

