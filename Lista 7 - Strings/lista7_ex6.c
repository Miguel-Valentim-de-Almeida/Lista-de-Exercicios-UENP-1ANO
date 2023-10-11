#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int cont_letra(char string[50], char caractere);

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char string[50], caractere;
    int f;
    printf("Insira uma string com até 50 caracteres: ");
    fgets(string, 49, stdin);
    setbuf(stdin, NULL);
    printf("Insira um caractere qualquer: ");
    scanf("%c", &caractere);
    setbuf(stdin, NULL);
    f = cont_letra(string, caractere);
    printf("Ocorrências da letra %c na string: %d", caractere, f);
    return 0;
}

int cont_letra(char string[50], char caractere){
    int count = 0;
    for(int i = 0; i<strlen(string); i++){
        if(tolower(string[i]) == tolower(caractere)){
            count++;
        }
    }
    return count;
}
