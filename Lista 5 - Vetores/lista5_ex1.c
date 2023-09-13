#include <stdio.h>
#include <locale.h>

int contador(float v[], int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(v[i] == v[n-1]){
            count++;
        }
    }
    return count;
}


int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int n, f;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vet[n];

    for(int i = 0;i <n;i++){
        printf("Digite o número da posição %d: ", i);
        scanf("%f", &vet[i]);
    }
    f = contador(vet, n);
    printf("O número %.2f aparece %d vezes", vet[n-1], f);
    return 0;
}
