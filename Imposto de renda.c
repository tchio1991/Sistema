//Calculo do imposto de renda de acordo com o salario

#include <stdio.h>
#include <stdlib.h>

int main() {
	float salario, sair;
	
	printf("\nTabala do Imposto de Renda 2022\n");
    printf("\nate R$ 1.903,98 - Isento - R$ 0.\n");
    printf("\nde R$ 1.903,99 a R$ 2.826,65 - 7,5% - R$ 142,80.\n");
    printf("\nde R$ 2.826,66 a R$ 3.751,05 - 15% - R$ 354,80.\n");
    printf("\nde R$ 3.751,06 a R$ 4.664,68 - 22,5% - R$ 636,13.\n");
    printf("\nacima de R$ 4.664,68 - 27,5% - R$ 869,36.\n");
    
    printf("\nInforme o seu salario: R$ \n");
    scanf("%f", &salario);
    
    printf("\nO seu salario e: R$ %.2f\n",salario);
    
    if (salario <= 1903.98) {
    	printf("\nVoce esta isento, entao nao vai haver descontos, o seu salario continua inalterado R$ %.2f\n",salario);
	}  
    else if (salario > 1903.98 && salario <= 2826.65) {
		printf("\nVoce vai pagar uma taxa de 7,5%% em cima do salario\n");
		printf("\nO seu salario atual R$ %.2f\n",salario);
		printf("\nO desconto de 7.5%  R$ %.2f\n", (salario*7.5)/100);
		printf("\nO seu salario apos o desconto da taxa R$ %.2f \n",salario-((salario*7.5)/100));
	} 
	else if (salario > 2826.65 && salario <= 3751.05) {
		printf("\nVoce vai pagar uma taxa de 15%% em cima do salario\n");
		printf("\nO seu salario atual R$ %.2f\n",salario);
		printf("\nO desconto de 15%  R$ %.2f\n", (salario*15)/100);
		printf("\nO seu salario apos o desconto da taxa R$ %.2f \n",salario-((salario*15)/100));
	}
	else if (salario > 3751.05 && salario < 4664.68) {
		printf("\nVoce vai pagar uma taxa de 22,5%% em cima do salario\n");
		printf("\nO seu salario atual R$ %.2f\n",salario);
		printf("\nO desconto de 22,5%%  R$ %.2f\n", (salario*22.5)/100);
		printf("\nO seu salario apos o desconto da taxa R$ %.2f \n",salario-((salario*22.5)/100));
    }
    else if (salario > 4664.68) {
		printf("\nVoce vai pagar uma taxa de 27,5%% em cima do salario\n");
		printf("\nO seu salario atual R$ %.2f\n",salario);
		printf("\nO desconto de 27,5%%  R$ %.2f\n", (salario*27.5)/100);
		printf("\nO seu salario apos o desconto da taxa R$ %.2f \n",salario-((salario*27.5)/100));
   }
   

   printf("\nFim do programa\n");
   printf("\nDigite um numero para sair do programa\n");
   scanf("%d", &sair);
}
 
