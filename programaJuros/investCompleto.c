#include <stdio.h>
#include <math.h>

int main ( void) {
	
	int i;
	
	printf ("Qual investimento deseja fazer?\nJuros simples digite:1\nJuros composto digite:2\n");
	scanf ("%i", &i);
	
		printf ("---------------------------------------------------\n");
	
	switch (i) {
		case 1:
			printf ("     |Juros simples|\n");
			
	printf("\n");
			
	
	float invest;
	float juros;
	float meses;
	float investimento;
	float total;
	
	printf ("Insira o valor do investimento:\n");
	scanf ("%f", &invest);
	
	printf ("\n");	
	
	printf ("Valor do juros (porcentagem):\n");
	scanf ("%f", &juros);
	
	printf ("\n");
	
	printf ("Digite quantos meses vai ser o seu invetimento:\n");
	scanf ("%f", &meses);
	
	printf ("\n");
	
	investimento = invest * (juros / 100) * meses;
	
	printf ("---------------------------------------------------\n");
	
	printf ("Seu lucro e de = %.2f\n", investimento);
	
	printf ("---------------------------------------------------\n");
	
	
			
			break;
			
		case 2:
			printf ("     |Juros composto|\n");
			
	printf("\n");
			
	
	float c; //capital 
	float j;//juros 
	float m;//tempo em meses
	float resultado;//resultado da formula 
	float me;//meses com expoente 
	float ju;//juros / 100 
	
	
	
	printf ("Insira o valor do investimento:\n");
	scanf ("%f", &c);
	
	printf ("\n");
	
	printf ("Insira valor do juros (porcentagem):\n");
	scanf ("%f", &j);
	
	printf ("\n");
	
	ju = (j/ 100) + 1;
	
	printf ("Digite quantos meses vai ser o seu invetimento:\n");
	scanf ("%f", &m);
	
	printf ("\n");
	
	me = pow(ju, m);
	
	printf ("---------------------------------------------------\n");
	
	resultado = (c * me) - c;
	printf ("Seu lucro e de: $%.2f\n", resultado);

	printf ("---------------------------------------------------\n");
			
			break;
			defauld:
			printf ("Opção Não Validada");
			break;
		
}
	
	system ("pause");
	return 0;
}
