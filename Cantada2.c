#include <stdio.h>
#include<locale.h>
#include <string.h>
#include <stdlib.h>

int main(void)

{	
	setlocale(LC_ALL, ""); // função para demonstração de palavras com acentuação, transformação para lingua portuguesa.
	
    char resposta[100]; // informar variável e listar quantidade de ATÉ 100 caracteres para a resposta que o usuário irá informar no SCANF
    char senhacorreta[] = "amanda"; // informar variável sem listar a quantidade de caracteres e informar a string com aspas duplas.
    
    printf ("Digite a resposta correta para ganhar um beijo \n");
    printf ("Qual o nome da pessoa mais gata de curitiba e região? ");
    scanf ("%s", resposta); // String não precisa colocar o "&" para a variável
       		
    	if(strcmp(strlwr(resposta), senhacorreta) != 0) 
    		{
    			printf(" \n Páia!! Errou. \n Tente novamente \n "); // resposta informada se o usuário colocou algo DIFERENTE da senhacorreta
    		}
    	else
    		{
    			printf (" \n UAL!! e não é que é mesmo? rs \n\n Apresente o seu Vale Beijo diretamente com a Camila para a retirada. \n ");  			
			}
			
	system("pause"); // sistema dá um pause para gravar a resposta no programa e não fechar direto automaticamente.
		
    return 0;
}
