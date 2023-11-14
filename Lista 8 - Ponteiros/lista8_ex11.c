#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int totalPalavras(char *str){
    int palavras = 0;
    for(int i = 0; i < strlen(str); i++){
        if(isspace(*(str + i))){
            palavras++;
        }
    }
    return palavras;
}

int main(){
    char string[100];
    printf("Insira uma string de até 100 caracteres: ");
    fgets(string, sizeof(string), stdin);
    printf("Total de palavras da string: %d", totalPalavras(string));
    return 0;
}