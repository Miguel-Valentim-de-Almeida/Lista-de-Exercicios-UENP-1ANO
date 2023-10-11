#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void vogais(char string[50]);

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char string[50];
    printf("Insira uma string com até 50 caracteres: ");
    fgets(string, 49, stdin);
    vogais(string);
    return 0;
}

void vogais(char string[50]){
    int count = 0;
    for(int i = 0; i<strlen(string); i++){
        if(tolower(string[i]) == 'a'){
            count++;
        }
        if(tolower(string[i]) == 'e'){
            count++;
        }
        if(tolower(string[i]) == 'i'){
            count++;
        }
        if(tolower(string[i]) == 'o'){
            count++;
        }
        if(tolower(string[i]) == 'u'){
            count++;
        }
    }
    printf("Quantidade de vogais na string: %d", count);
}
