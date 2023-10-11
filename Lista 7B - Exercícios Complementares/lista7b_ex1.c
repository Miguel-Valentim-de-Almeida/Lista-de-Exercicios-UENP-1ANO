#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char string[50];
    printf("Insira uma string qualquer com até 50 caracteres: ");
    fgets(string, 49, stdin);
    setbuf(stdin, NULL);
    for(int i = 0; i<strlen(string); i++){
        if(tolower(string[i])=='a'){
            string[i] = '*';
        }
        else if(tolower(string[i])=='e'){
            string[i] = '*';
        }
        else if(tolower(string[i])=='i'){
            string[i] = '*';
        }
        else if(tolower(string[i])=='o'){
            string[i] = '*';
        }
        else if(tolower(string[i])=='u'){
            string[i] = '*';
        }
    }
    puts(string);
    return 0;
}
