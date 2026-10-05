#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    double distance;          
    double consumption;       
    double price_per_liter;   
    double fuel_needed;       
    double trip_cost;         

    setlocale(LC_CTYPE, "");

    printf("Введите расстояние (км): ");
    scanf("%lf", &distance);

    printf("Введите расход топлива (л на 100 км): ");
    scanf("%lf", &consumption);

    printf("Введите стоимость 1 литра бензина (руб.): ");
    scanf("%lf", &price_per_liter);

    fuel_needed = distance / 100.0 * consumption;

    trip_cost = fuel_needed * price_per_liter;

    printf("\nРАСЧЕТ СТОИМОСТИ ПОЕЗДКИ\n");
    printf("================================\n\n");
    printf("УСЛОВИЯ:\n");
    printf("- Расстояние: %.2f км\n", distance);
    printf("- Расход топлива: %.2f л на 100 км\n", consumption);
    printf("- Стоимость 1 литра бензина: %.2f руб.\n\n", price_per_liter);

    printf("РАСЧЕТ:\n");
    printf("- Необходимо бензина: %.2f / 100 * %.2f = %.2f л\n",
        distance, consumption, fuel_needed);
    printf("- Стоимость поездки: %.2f * %.2f = %.2f руб.\n",
        fuel_needed, price_per_liter, trip_cost);
    printf("================================\n");
    printf("СТОИМОСТЬ ПОЕЗДКИ: %.2f руб.\n", trip_cost);

    return 0;
}