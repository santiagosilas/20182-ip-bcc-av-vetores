// Algoritmo para Contar Palavras em uma String
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int contar(char s[]){

  char end = '\0', esp = ' ';
  int i, count = 0;
  int na_palavra = 0; // flag que indica se está na palavra

  // Percorre todo o vetor de caracteres
  for(i=0; s[i] != end; ++i){

     if(s[i]!= esp && s[i] != end && na_palavra == FALSE){
       na_palavra = TRUE;
       count++; // conta uma palavra
     }
     else if(na_palavra == TRUE && ( s[i]==esp || s[i] == end) ){
	na_palavra = FALSE;
     }

  } // end of for

  return count;

} // end of function

int main(){
  char s[] = "Ifce Campus Aracati\0";
  int count = contar(s);
  printf("qtde palavras: %d\n", count);
  return 0;
}
