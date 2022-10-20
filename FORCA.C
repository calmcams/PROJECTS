#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <time.h>
#include <string.h>

// ALGUMAS INSTRUÇÕES:
// PARA PUXAR O TXT COM AS PALAVRAS ALEATÓRIAS, PRECISA ESTAR NO MESMO DIRETÓRIO SALVO QUE ESTE PROGRAMA.

void mostraTelaForca(int qtdErros, char letrasEscolhidas[], int maxErros)
{
	system("cls");
	
	printf("BEM VINDO AO JOGO DA FORCA - INTRODUÇÃO PROGRAMAÇÃO ESTRUTURADA EM C - 10/2022\n");
	printf("\n VOCÊ TEM 5(CINCO) CHANCES PARA O ACERTO, \n NA 06°TENTATIVA.... \n VOCE MORRE!!!!!!! \n E PRA PIORAR... \n ENFORCADO rsrs \n");
	printf("---------------------------------------------------------------\n");
	printf("\n No fundo, no fundo,\n bem lá no fundo,\n a gente gostaria\n de ver nossos problemas \n resolvidos por decreto     \n");
	printf("\n ---------------------------------------------------------------\n");
	
	printf("\nERROS COMETIDOS: %d. ERROS PERMITIDOS: %d. \n", qtdErros, maxErros);
	printf("  ___       \n");
	printf(" |/      |      \n");
	printf(" |      %c%c%c  \n", (qtdErros>=1?'(':' '), (qtdErros>=1?'_':' '), (qtdErros>=1?')':' '));
	printf(" |      %c%c%c  \n", (qtdErros>=3?'\\':' '), (qtdErros>=2?'|':' '), (qtdErros>=4?'/': ' '));
	printf(" |       %c     \n", (qtdErros>=2?'|':' '));
	printf(" |      %c %c   \n", (qtdErros>=5?'/':' '), (qtdErros>=6?'\\':' '));
	printf(" |              \n");
	printf("|__           \n");
	printf("\n\n");
	
	printf("LETRAS ESCOLHIDAS: %s\n", letrasEscolhidas);
}

int main ()
{
	setlocale(LC_ALL,"");
	
	FILE *arquivo;
	char nomeArquivo[] = "palavras.txt"; // O "palavras.txt" é o nome do arquivo txt para ser aberto com as palavras aleatórias a ser escolhida.
	char PalavraSorteada[100];
	int NumeroLinha, Contador, QtdErrosCometidos=0, MaxErros = 5, LetrasCertas, Jogada;
		
	srand (time(NULL));               //      gerar numero aleatório conforme o relógio
	NumeroLinha = rand() % 158 + 1;   //      defenir de onde até onde ele irá ler (1 até linha 158)
	
	printf("\n Número aleatório %d \n", NumeroLinha);
     
    arquivo = fopen(nomeArquivo, "r");

    if(arquivo == NULL)
	{
		printf("\n Erro abrindo o arquivo %s", nomeArquivo);
		return(1);
	}
	
	Contador = 0;
	
	while(fgets(PalavraSorteada, 100, arquivo))
    {
        Contador++;
        if ( Contador == NumeroLinha)	
        break;
    }
     
    fclose(arquivo);
    
    printf("\n Arquivo: %s \n Linha: %d \n Palavra: [%s]\n", nomeArquivo, NumeroLinha, PalavraSorteada); // a diferença de \n para a substituição de \0
        
    int TamanhoPalavraSorteada = strlen(PalavraSorteada);
	    
    if ( PalavraSorteada[TamanhoPalavraSorteada-1] == '\n' ) 
    {
        PalavraSorteada[TamanhoPalavraSorteada-1] = '\0';
    }
    
    printf("\n Arquivo: %s \n Linha: %d \n Palavra: [%s]\n", nomeArquivo, NumeroLinha, PalavraSorteada); // verifica a substituição e os "pulos" de linha.
    
    char PalavraDescoberta[100];
    char PalavraSecreta[100];
    char letrasEscolhidas[100] = "";
    
    Contador = 0;
    
    for (Contador=0; Contador < TamanhoPalavraSorteada-1; Contador++)
    {
        PalavraDescoberta[Contador] = '-';
    }
	
    PalavraDescoberta[TamanhoPalavraSorteada-1] = '\0';
		
    printf("Palavra descoberta:[%s].\n", PalavraDescoberta);
    
    
    
    // A PARTIR DAQUI, IRÁ MOSTRAR APENAS A FORCA E AS INFORMAÇÕES DECLARADAS NO INICIO DO PROGRAMA E O RESTANTE DE INFORMAÇÕES FICARÁ "ESCONDIDA"
    
   
    char letra;

	int jogada = 0;
	
	while ( strcmp(PalavraSorteada, PalavraDescoberta) != 0 && QtdErrosCometidos <= MaxErros)
	{
		mostraTelaForca(QtdErrosCometidos, letrasEscolhidas, MaxErros);
		
		printf("Palavra descoberta:[%s].\n", PalavraDescoberta);
		printf("Escolha uma letra: ");
		scanf("%c", &letra);
		fflush(stdin);

		letrasEscolhidas[jogada] = letra;
		letrasEscolhidas[jogada+1] = '\0';
		jogada++;	
		LetrasCertas = 0;
		
		for (Contador=0; Contador < TamanhoPalavraSorteada-1; Contador++)
	{
		if ( PalavraSorteada[Contador] == letra )
		{
			PalavraDescoberta[Contador] = letra;
			LetrasCertas++;
		}
	}

	if ( LetrasCertas == 0 ) QtdErrosCometidos++;


	}
}
