// compile with gc -lm

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int converter(char str[]){
    int tam, i, digito, n = 0;

    // Obter a qtde de caracteres da string
    for(tam=0;str[tam]!='\0';tam++);

    for(i=0; str[i]!='\0'; i++, tam--){
        digito = str[i] - 48;
        n += digito * pow(10, tam-1);
    }
    return n;
}

int main(){
    char str[10] = "123\0";
    int x = converter(str);
    printf("numero convertido: %d\n", x);
}
