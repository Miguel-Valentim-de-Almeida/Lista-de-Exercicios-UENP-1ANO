#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char string[50];
    int count = 0;
    printf("Insira uma string com até 50 caracteres: ");
    fgets(string, 49, stdin);
    for(int i = 0; i<50; i++){
        if(isspace(string[i])){
                count++;
        }
    }
    printf("Quantidade de espaços em branco: %d", count-1);
    return 0;
}
