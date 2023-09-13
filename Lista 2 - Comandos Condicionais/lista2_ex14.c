#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE,"Portuguese");
    float km;
    int tipoVeiculo;

    printf("Quantos quil�metros percorridos? ");
    scanf("%f", &km);

    printf("Digite o tipo do ve�culo:\n[ 1 ] Tipo A\n[ 2 ] Tipo B\n[ 3 ] Tipo C\n");
    scanf("%d", &tipoVeiculo);

    switch(tipoVeiculo){
    case 1:
        printf("Ve�culos tipo A fazem 15 km/l, logo, o consumo estimado de combust�vel � de %.1f litros", km / 15);
        break;
    case 2:
        printf("Ve�culos tipo B fazem 12 km/l, logo, o consumo estimado de combust�vel � de %.1f litros", km / 12);
        break;
    case 3:
        printf("Ve�culos tipo C fazem 10 km/l, logo, o consumo estimado de combust�vel � de %.1f litros", km / 10);
        break;
    default:
        printf("Tipo de ve�culo inv�lido!");
        break;
    }
    return 0;
}
