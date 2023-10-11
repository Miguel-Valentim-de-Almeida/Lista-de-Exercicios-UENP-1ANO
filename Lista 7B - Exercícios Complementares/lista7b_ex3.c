#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char string[50], busca;
    int indices[50], count = 0, tamanho = 0;
    printf("Insira uma string qualquer com até 50 caracteres: ");
    fgets(string, 49, stdin);
    setbuf(stdin, NULL);
    printf("Insira um caractere de busca: ");
    scanf("%c", &busca);
    setbuf(stdin, NULL);
    for(int i = 0; i<50; i++){
        if(busca == string[i]){
            indices[count] = i;
            count++;
        }
    }

    if(count == 0){
        printf("-1");
    }

    else{
        printf("O caractere %c aparece nas posições: ", busca);
        for(int i = 0; i<count; i++){
            printf("%d ", indices[i]);
        }
    }
    return 0;
}
