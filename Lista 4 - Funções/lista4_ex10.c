#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int vogal_consoante(char letra){
    char letraMaiuscula = toupper(letra);
    switch(letraMaiuscula){
    case 'A':
        return 1;
        break;
    case 'E':
        return 1;
        break;
    case 'I':
        return 1;
        break;
    case 'O':
        return 1;
        break;
    case 'U':
        return 1;
        break;
    default:
        return 0;
        break;
    }
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int f;
    char l;

    printf("Digite uma letra: ");
    scanf("%c", &l);

    f = vogal_consoante(l);

    if(f == 1){
        printf("'%c' é uma vogal!", l);
    }
    else if(f == 0){
        printf("'%c' não é uma vogal!", l);
    }
    return 0;
}
