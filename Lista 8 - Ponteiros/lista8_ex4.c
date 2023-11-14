#include <stdio.h>

int main(){
    char str[255], caractere;
    int count = 0;

    printf("Entre com a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Entre com o caractere: ");
    scanf("%c", &caractere);

    char *ponteiro = str;
    for(int i = 0; ponteiro[i] != '\0'; i++){
        if(ponteiro[i] == caractere){
            printf("%d\n", i);
            count++;
        }
    }
    if(count == 0){
        printf("-1\n");
    }
    return 0;
}