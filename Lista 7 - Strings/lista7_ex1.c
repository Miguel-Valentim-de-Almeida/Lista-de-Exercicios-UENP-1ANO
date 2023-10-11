#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char string[51];
    printf("Digite algo com até 50 caracteres: ");
    scanf("%[^\n]s", string);
    setbuf(stdin, NULL);
    for(int i = strlen(string) - 1; i >=0; i--){
        printf("%c", string[i]);
    }
    return 0;
}
