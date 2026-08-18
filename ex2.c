#include <stdio.h>

int main(){
    float tax_rate1;
    float tax_rate2;
    float income_lim;
    float sallary[12];
    float tax[12];

    printf("Enter tax rate: ");
    scanf("%f", &tax_rate1);
    printf("Enter income limit: ");
    scanf("%f", &income_lim);
    printf("Enter tax rate for income over the limit: ");
    scanf("%f", &tax_rate2);

    for(int i = 0; i < 12; i++){
        printf("Enter income for month %d: ", i + 1);
        scanf("%f", &sallary[i]);
        tax[i] = (tax_rate1 / 100) * sallary[i];
    }
    /*// testi tulostaa arrayn
    for(int i = 0; i < 12; i++){
        printf("%f %f\n", sallary[i], tax[i]);
    }
    */
}