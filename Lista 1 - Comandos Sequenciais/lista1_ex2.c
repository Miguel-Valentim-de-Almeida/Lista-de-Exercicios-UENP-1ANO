# include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4;
    float mediaPonderada;
    printf("Digite a 1° nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2° nota: ");
    scanf("%f", &nota2);
    printf("Digite a 3° nota: ");
    scanf("%f", &nota3);
    printf("Digite a 4° nota: ");
    scanf("%f", &nota4);
    
    mediaPonderada = (nota1 * 1.5) + (nota2 * 2) + (nota3 * 3) + (nota4 * 3.5);
    
    printf("A média ponderada é de: %.1f \n", mediaPonderada / 10);
    return 0;
}
