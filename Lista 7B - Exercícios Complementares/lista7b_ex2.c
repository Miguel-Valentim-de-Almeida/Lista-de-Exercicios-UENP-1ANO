#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char matriz[5][50], busca[50];
    int encontrada = 0;
    for(int i = 0; i<5; i++){
        printf("Insira a string %d com até 50 caracteres: ", i+1);
        fgets(matriz[i], 49, stdin);
        setbuf(stdin, NULL);
    }
    printf("Imprimindo as strings:\n");
    for(int i = 0; i<5; i++){
        printf("String %d: %s", i+1, matriz[i]);
    }
    printf("Insira uma string de busca com até 50 caracteres: ");
    fgets(busca, 49, stdin);
    setbuf(stdin, NULL);

    for(int i = 0; i<5; i++){
        int j = 0;
        while(matriz[i][j] != '\0' && matriz[i][j] != '\n'){
            if(matriz[i][j] != busca[j]){
                break;
            }
            j++;
        }
        if(busca[j] == '\0' || busca[j] == '\n'){
            printf("Essa string está contida na matriz na linha %d\n", i+1);
            encontrada = 1;
        }
    }
    if(!encontrada){
        printf("Essa string não está contida na matriz!");
    }
    return 0;
}
