#include<stdio.h>
#include<locale.h>
#include <string.h>

//esse programa irá conter LETRAS origiais e iremos transformar em outras, para criptografar.

int main ()
{
      setlocale(LC_ALL,"");
      
      char frase[100] = "Gostaria de voar comigo?";
      // [100] - o máximo de caracter que irá armanezar
            
      int selecao;
      selecao = strlen(frase); // "strlen" irá calcular quantos caracteres tem dentro da variável declarada.
      int deslocamento = 5; // informamos uma variável com numero inteiro para ele somar conforme a tabela ASCII.
      int i;
      
      for(i = 0 ; i < selecao ; i++) // i é o contador. i é declarado para ser informado o valor dentro do "for". Enquanto o "i" for menor que o numero de
      //caracteres (selecao), ele irá continuar imprimindo todos os caracteres da variável frase.
      // o "i++" é para continuar o looping, então será i = 0 + 1 = 1.
      {
            printf("%c",frase[i]+deslocamento); // IMPRIME A FRASE INFORMADA + 5 CARACTERES NA SEQUENCIA DA TABELA ASCII APÓS O INFORMADO NA FRASE
            // EX: G(71) + 5 = L(76) - 71 e 76 dentro da tabela ASCII
      }
      
      for(i = 0 ; i < selecao ; i++)
      {
            printf("%c",frase[i]+deslocamento-deslocamento);
      }

}
