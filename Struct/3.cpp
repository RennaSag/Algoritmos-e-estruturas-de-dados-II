#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Pontos;

float Distancia(float x1, float y1, float x2, float y2) {
    float dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dist;
}

int main() {
    Pontos ponto[2];

    for (int i = 0; i < 2; i++) {
        printf("Ponto %d:\n", i + 1);

        printf("X: ");
        scanf("%f", &ponto[i].x);

        printf("Y: ");
        scanf("%f", &ponto[i].y);

        system("cls"); 
    }

    float distancia = Distancia(ponto[0].x, ponto[0].y, ponto[1].x, ponto[1].y);

    printf("Distancia entre os pontos: %.2f\n", distancia);

    return 0;
}

