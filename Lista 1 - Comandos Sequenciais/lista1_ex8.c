# include <stdio.h>

int main()
{
    float salarioBase, salarioReceber;
    
    printf("Digite o seu salário-base: R$ ");
    scanf("%f", &salarioBase);
    
    salarioReceber = (salarioBase + 50) * 0.88;
    
    printf("Seu salário líquido é de R$ %.2f", salarioReceber);
    return 0;
}

