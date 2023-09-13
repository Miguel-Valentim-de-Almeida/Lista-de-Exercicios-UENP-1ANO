# include <stdio.h>

int main()
{
    int cafe, pagamento;
    float totalCafe, troco;
    
    printf("Cada café custa R$ 7,00. Quantos cafés você quer? ");
    scanf("%d", &cafe);
    
    totalCafe = 7 * cafe;
    
    printf("Valor total: R$ %.2f. Insira o pagamento (apenas valores múltiplos de 5): R$ ", totalCafe);
    scanf("%d", &pagamento);
    
    troco = pagamento - totalCafe;
    
    printf("Você perdeu R$ %.2f de troco.", troco);
    
    return 0;
}

