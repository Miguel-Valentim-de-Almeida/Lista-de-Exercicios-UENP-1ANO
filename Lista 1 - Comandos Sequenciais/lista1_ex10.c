# include <stdio.h>
int main()
{
    float distanciaPercorrida, gastoCombustivel, consumoMedio;
    
    printf("Distância percorrida em km: ");
    scanf("%f", &distanciaPercorrida);
    printf("Total de combustível gasto em litros: ");
    scanf("%f", &gastoCombustivel);
    
    consumoMedio = distanciaPercorrida / gastoCombustivel;
    
    printf("O consumo médio do seu carro é de %.1f km/l", consumoMedio);
    return 0;
}
