#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float altura;
    int idade, contador = 0;

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(altura >=1.5 && idade >= 12){
        contador+=1;
    }

    if(altura >=1.4 && idade >= 14){
        contador+=1;
    }

    if(altura >= 1.7 || idade >= 16){
        contador+=1;
    }

    if(contador == 0){
        printf("Sinto muito! Você não pode ir em nenhum brinquedo!");
    }

    else if(contador == 1){
         printf("Você tem %.2fm de altura e %d anos, logo, você pode andar em 1 brinquedo!", altura, idade);
    }

    else if(contador > 1){
         printf("Você tem %.2fm de altura e %d anos, logo, você pode andar em %d brinquedos!", altura, idade, contador);
    }
    return 0;
}
