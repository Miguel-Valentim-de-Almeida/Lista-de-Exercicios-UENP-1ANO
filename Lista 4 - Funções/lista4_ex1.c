#include <stdio.h>
#include <locale.h>

float area(float comp, float larg){
    float a;
    a = (comp*larg);
    return a;
}

int main(){
    setlocale(LC_CTYPE,"Portuguese");
    int num, i = 0;
    float c, l, funcao;
    printf("Digite o número de terrenos: ");
    scanf("%d", &num);

    while(i<num){
        printf("Terreno %d\n", i+1);
        printf("Digite o comprimento em metros: ");
        scanf("%f,", &c);
        printf("Digite a largura em metros: ");
        scanf("%f", &l);
        funcao = area(c,l);
        printf("Área: %.2f m²\n", funcao);
        i++;
    }
    return 0;
}
