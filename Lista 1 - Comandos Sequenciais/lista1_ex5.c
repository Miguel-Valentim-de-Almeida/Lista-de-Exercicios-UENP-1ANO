# include <stdio.h>
# include <math.h>

int main()
{
    int x1, y1, x2, y2;
    float distancia;
    
    printf("Digite as coordenadas do ponto A (x,y): ");
    scanf("%d,%d", &x1, &y1);
    
    printf("Digite as coordenadas do ponto B (x,y): ");
    scanf("%d,%d", &x2, &y2);
    
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    printf("A distância entre o ponto A(%d,%d) e o ponto B(%d,%d) é: %.1f \n", x1, y1, x2, y2, distancia);
    
    return 0;
}


