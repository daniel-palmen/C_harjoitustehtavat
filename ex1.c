#include <stdio.h>

int main() {
    float bus;
    float taxi;
    float money;
    float cheapest;
    int choice;

    printf("Enter price for bus ticket: ");
    scanf("%f", &bus);
    printf("Enter price for taxi: ");
    scanf("%f", &taxi);
    printf("How much money you have: ");
    scanf("%f", &money);
    if(bus <= taxi){
        cheapest = bus;
    }
    else if(taxi <= bus){
        cheapest = taxi;
    }
    while(money >= cheapest){
        printf("You have %.2f euros left.\n", money);
        printf("Do you want to take\n");
        printf("1) Bus (%.2f euros)\n", bus);
        printf("2) Taxi (%.2f euros)\n", taxi);
        printf("Enter your selection: ");
        scanf("%d", &choice);
        if(choice == 1){
            if(money >= bus){
                money = money - bus;
            }
            else{
                printf("You don't have enough money for bus.\n");
            }
        }
        else if(choice == 2){
            if(money >= taxi){
                money = money - taxi;
            }
            else{
                printf("You don't have enough money for taxi.\n");
            }
        }
        else{
            printf("Choose 1 or 2.\n");
        }
    }
    printf("You have %.2f euros left.\n", money);
    printf("You need to walk. Bye");
}