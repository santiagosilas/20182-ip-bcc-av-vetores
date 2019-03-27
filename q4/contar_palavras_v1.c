// Algoritmo para Contar Palavras em uma String
#include<stdio.h>

int contar(char s[]){
  char end = '\0', esp = ' ';
  int i, count = 0;
  
  // Percorre todo o array de caracteres ..
  for(i=0; s[i] != end; ++i){

     // se um caractere diferente de espaço ou \0 for encontrado ...
     if(s[i]!= esp && s[i] != end){

       // Imprima a palavra
       printf("palavra:");
       while(s[i+1] != end && s[i+1] !=  esp){
         printf("%c", s[i]);
         i++;
       } // enf of while

       // Incrementar o contador de palavras
       count++;

       printf("%c\n", s[i]);

    } // end of if
  } // end of for

  return count;

} // end of function

int main(){
  char s[] = "   Ifce   Campus    Aracati   \0";
  int count = contar(s);
  printf("qtde palavras: %d\n", count);
  return 0;
}
