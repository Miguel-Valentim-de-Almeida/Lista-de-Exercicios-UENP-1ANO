# include <stdio.h>
# include <locale.h>

int main(){

    setlocale(LC_CTYPE, "Portuguese");
    long int numeroFuncionario, horasTrabalhadas;
    float recebePorHora, salario;

    printf("Digite o seu n�mero: ");
    scanf("%ld", &numeroFuncionario);

    printf("Quantas horas voc� trabalha por dia?  ");
    scanf("%ld", &horasTrabalhadas);

    printf("Digite quanto voc� recebe por hora: R$ ");
    scanf("%f", &recebePorHora);

    // Eu multipliquei por 20 levando em considera��o que, em m�dia, um m�s tem 4 semanas e cada semana tem 5 dias �teis
    salario = (horasTrabalhadas * recebePorHora) * 20;

    printf("Seu n�mero: %ld, seu sal�rio: R$ %.2f", numeroFuncionario, salario);
    return 0;
}
