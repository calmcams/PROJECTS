#include<stdio.h>
#include<locale.h>

int main()
{
	
	setlocale(LC_ALL, "");
	
	float a1, a2, a3;
	float media;	
	
	printf("Vamos analisar a média que ficamos \n \n");
	
		printf("Qual a sua nota de sua Primeira Prova?");
		scanf("%f", &a1);
	
		printf("Qual a sua nota na Segunda Prova?");
		scanf("%f", &a2);
	
		printf("Qual a sua nota na Terceira Prova?");
		scanf ("%f", &a3);
		
		printf("\n Suas notas respectivamente são: \n 1 - %f,\n 2 - %f,\n 3 - %f \n", a1, a2, a3);
		
			media = (a1 + a2 + a3) / 3;

		printf("E sua média ficou em: %f", media);
		
	
		if(media>=6)
			{
				printf("\n Parabéns!!! Tá passada nessa matéria! \n ");
			}
			
		if (media<6)
			{
				printf("\n Dessa vez não foi! Terá que recuperar essa nota, mocinha! \n");
			}
}
