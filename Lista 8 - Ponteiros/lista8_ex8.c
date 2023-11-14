#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char string[] = "não gosto de programar em C";
    char *ponteiro = string;
    for(int i = 5; i < strlen(string); i++){
        printf("%c", *(ponteiro + i));
    }
    return 0;
}