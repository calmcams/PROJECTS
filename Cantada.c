#include<stdio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	
	int opcoes, camila, outronome;
	
	camila = 1;
	outronome = 2;
	
	printf("Qual o seu nome?\n");
	printf("\n Por acaso é Camila? Se sim digite 1,\n se for outro nome, digite 2\n");
	scanf("%d", &opcoes);
	
	if(opcoes==2)
		{
			printf("Show, obrigada pela informação!\n");
			scanf("%d",outronome);
		}
			
	if(opcoes==1);
		{
			printf("Você quis dizer, pessoa incrivelmente maravilhosa, sensacional, cheirosa, inteligente e gostosa?\n");
			scanf("%d", camila);
		}
	
	return 0;
		
}
