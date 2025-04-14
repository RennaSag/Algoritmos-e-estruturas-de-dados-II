#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct {
    int x;
    int y;
} PONTO;


PONTO *aloca(int x, int y) {
    PONTO *p = (PONTO *)malloc(sizeof(PONTO));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}


void libera(PONTO *a) {
    if (a != NULL) {
        free(a);
    }
}


float distancia(PONTO *a, PONTO *b) {
    if (a == NULL || b == NULL) {
        return -1.0; 
    }

    float dx = a->x - b->x;
    float dy = a->y - b->y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int x1, y1, x2, y2;
    PONTO *ponto1, *ponto2;

    printf("Digite as coordenadas do ponto A (x y): ");
    scanf("%d %d", &x1, &y1);

    printf("Digite as coordenadas do ponto B (x y): ");
    scanf("%d %d", &x2, &y2);

    ponto1 = aloca(x1, y1);
    ponto2 = aloca(x2, y2);

    if (ponto1 == NULL || ponto2 == NULL) {
        printf("Erro ao alocar os pontos.\n");
        return 1;
    }

    float d = distancia(ponto1, ponto2);

    printf("A distância entre os pontos A e B é: %.2f\n", d);

    libera(ponto1);
    libera(ponto2);

    return 0;
}

