#include <stdio.h>
#include <string.h>

struct Eletrodomestico {
    char nome[16];
    double potencia; 
    double tempo_ativo; 
};

int main() {
    struct Eletrodomestico eletrodomesticos[5];
    double consumo_total = 0.0;

    printf("Informe os dados dos eletrodomesticos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Eletrodomestico %d:\n", i + 1);
        printf("Nome (maximo 15 letras): ");
        scanf("%15s", eletrodomesticos[i].nome);
        printf("Potencia (kW): ");
        scanf("%lf", &eletrodomesticos[i].potencia);
        printf("Tempo ativo por dia (horas): ");
        scanf("%lf", &eletrodomesticos[i].tempo_ativo);
    }

    
    double tempo_dias;
    printf("Informe o tempo em dias: ");
    scanf("%lf", &tempo_dias);

    
    for (int i = 0; i < 5; i++) {
        consumo_total += (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo * tempo_dias);
    }

   
    printf("\nConsumo total na casa: %.2lf kWh\n", consumo_total);

    
    printf("\nConsumo relativo de cada eletrodomestico:\n");
    for (int i = 0; i < 5; i++) {
        double consumo_relativo = (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo * tempo_dias) / consumo_total * 100.0;
        printf("%s: %.2lf%%\n", eletrodomesticos[i].nome, consumo_relativo);
    }

    return 0;
}
