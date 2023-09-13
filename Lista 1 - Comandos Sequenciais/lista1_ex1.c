# include <stdio.h>

int main()
{
    float raio, perimetro, area;
    
    printf("Digite o raio do círculo em cm: ");
    scanf("%f", &raio);
    
    perimetro = 2 * 3.14 * raio;
    area = 3.14 * raio * raio;
    
    printf("Perímetro = %.2f cm \n", perimetro);
    printf("Área = %.2f cm \n", area);
    return 0;
}



