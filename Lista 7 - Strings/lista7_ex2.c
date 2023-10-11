#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char string[50];
    printf("Insira uma string qualquer com até 50 caracteres (apenas letras): ");
    fgets(string, 49, stdin);
    for(int i = 0; i<50; i++){
        string[i] = tolower(string[i]);
    }
    //Descobri que linguagem C faz operações com char
    for (int i = 0;i<50; i++) {
        if (islower(string[i])) {
            string[i] = 'z' - (string[i] - 'a');
        }
    }
    puts(string);
    return 0;
}
