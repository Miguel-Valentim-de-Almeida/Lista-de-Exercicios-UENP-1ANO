#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    switch(letra){
    case 'A':
        printf("%c � uma vogal.", letra);
        break;
    case 'a':
        printf("%c � uma vogal.", letra);
        break;
    case 'E':
        printf("%c � uma vogal.", letra);
        break;
    case 'e':
        printf("%c � uma vogal.", letra);
        break;
    case 'I':
        printf("%c � uma vogal.", letra);
        break;
    case 'i':
        printf("%c � uma vogal.", letra);
        break;
    case 'O':
        printf("%c � uma vogal.", letra);
        break;
    case 'o':
        printf("%c � uma vogal.", letra);
        break;
    case 'U':
        printf("%c � uma vogal.", letra);
        break;
    case 'u':
        printf("%c � uma vogal.", letra);
        break;
    default:
        printf("%c � uma consoante.", letra);
        break;
    }
    return 0;
}
