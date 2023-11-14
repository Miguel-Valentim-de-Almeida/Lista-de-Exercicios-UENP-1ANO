#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int vetor[20];
    for (int i = 0; i < 20; i++){
        printf("Insira o número inteiro da posição %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    int *ptr_inicio = vetor, *ptr_fim = vetor + 19;
    for(int i = 0; i<=10; i++){
        printf("%d ", *(ptr_inicio + i));
    }
    printf("\n");
    for(int i = 0; i<10; i++){
        printf("%d ", *(ptr_fim - i));
    }
    return 0;
}
