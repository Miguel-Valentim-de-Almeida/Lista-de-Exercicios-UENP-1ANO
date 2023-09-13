#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE,"Portuguese");
    float km;
    int tipoVeiculo;

    printf("Quantos quilômetros percorridos? ");
    scanf("%f", &km);

    printf("Digite o tipo do veículo:\n[ 1 ] Tipo A\n[ 2 ] Tipo B\n[ 3 ] Tipo C\n");
    scanf("%d", &tipoVeiculo);

    switch(tipoVeiculo){
    case 1:
        printf("Veículos tipo A fazem 15 km/l, logo, o consumo estimado de combustível é de %.1f litros", km / 15);
        break;
    case 2:
        printf("Veículos tipo B fazem 12 km/l, logo, o consumo estimado de combustível é de %.1f litros", km / 12);
        break;
    case 3:
        printf("Veículos tipo C fazem 10 km/l, logo, o consumo estimado de combustível é de %.1f litros", km / 10);
        break;
    default:
        printf("Tipo de veículo inválido!");
        break;
    }
    return 0;
}
