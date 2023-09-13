#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "Portuguese");
    int n, i, j;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    float vetor[n], ordemCrescente[n];

    for (i = 0; i < n; i++) {
        printf("Insira um número para a posição %d: ", i);
        scanf("%f", &vetor[i]);
    }
    ordemCrescente[0] = vetor[0];
    for (i = 1; i < n; i++) {
        j = i;
        while (j > 0 && vetor[j] < ordemCrescente[j - 1]) {
            ordemCrescente[j] = ordemCrescente[j - 1];
            j--;
        }
        ordemCrescente[j] = vetor[i];
    }
    printf("Vetor em ordem crescente:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", ordemCrescente[i]);
    }
    return 0;
}
