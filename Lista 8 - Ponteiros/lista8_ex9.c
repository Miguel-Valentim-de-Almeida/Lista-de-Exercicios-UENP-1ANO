#include <stdio.h>
#include <locale.h>

int maior_elemento(int vetor[], int tamanho, int *ponteiro){
    int maior = 0, indice_maior;
    for(int i = 0; i<tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            indice_maior = i;
        }
    }
    *ponteiro = indice_maior;
    return maior;
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int tamanho;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++){
        printf("Insira o número inteiro da posição %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    int pos;
    printf("O maior número do vetor é: %d\n", maior_elemento(vetor, tamanho, &pos));
    printf("Valor da variável pos: %d", pos);
    return 0;
}