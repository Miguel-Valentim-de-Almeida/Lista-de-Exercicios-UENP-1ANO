#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char string1[50], string2[50];
    printf("Digite uma string de at� 50 caracteres: ");
    fgets(string1, 49, stdin);
    printf("Digite outra string de at� 50 caracteres: ");
    fgets(string2, 49, stdin);
    strcmp(string1, string2);
    if(strcmp(string1, string2) == 0){
        printf("As strings s�o iguais!\n");
    }
    else{
        printf("As strings s�o diferentes!\n");
    }
    if(strlen(string1) == strlen(string2)){
        printf("O tamanho das strings � igual!\n");
    }
    else {
        printf("O tamanho das strings � diferente!\n");
    }
    return 0;
}
