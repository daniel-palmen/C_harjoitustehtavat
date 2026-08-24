#include <stdio.h>

int main(){
    float tax_rate1;
    float tax_rate2;
    float income_lim;
    float income_sum;
    float income_over;
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
        if(income_lim >= income_sum + sallary[i]){
            income_sum = income_sum + sallary[i];
            tax[i] = (tax_rate1 / 100) * sallary[i];
        }
        else if(income_lim < income_sum){
            income_sum = income_sum + sallary[i];
            tax[i] = (tax_rate2 / 100) * sallary[i];
        }
        else if(income_lim < income_sum + sallary[i]){
            income_over = income_sum + sallary[i] - income_lim;
            tax[i] = (tax_rate2 / 100) * income_over + (tax_rate1 / 100) * (income_lim - income_sum);
            income_sum = income_sum + sallary[i];
        }
    }
    printf("%-10s %-10s %-10s\n", "Month", "Income", "Tax");
    for(int i = 0; i < 12; i++){
        printf("%-10d %-10.2f %-10.2f\n", i + 1, sallary[i], tax[i]);
    }
}