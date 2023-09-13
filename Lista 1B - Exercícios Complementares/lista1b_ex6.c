# include <stdio.h>
# include <locale.h>

int main(){

    setlocale(LC_CTYPE, "Portuguese");
    long int numeroFuncionario, horasTrabalhadas;
    float recebePorHora, salario;

    printf("Digite o seu número: ");
    scanf("%ld", &numeroFuncionario);

    printf("Quantas horas você trabalha por dia?  ");
    scanf("%ld", &horasTrabalhadas);

    printf("Digite quanto você recebe por hora: R$ ");
    scanf("%f", &recebePorHora);

    // Eu multipliquei por 20 levando em consideração que, em média, um mês tem 4 semanas e cada semana tem 5 dias úteis
    salario = (horasTrabalhadas * recebePorHora) * 20;

    printf("Seu número: %ld, seu salário: R$ %.2f", numeroFuncionario, salario);
    return 0;
}
