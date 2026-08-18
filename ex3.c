#include <stdio.h>

int main(){
    int students;
    int arvosana = -1;
    int choice = 1;
    
    printf("How mady students: ");
    scanf("%d", &students);
    int numerot[students];
    for(int i = 0; i < students; i++){
        numerot[i] = arvosana;
    }
    while(choice != 0){
        printf("\nEnter student number (1 - %d) or 0 to stop: ", students);
        scanf("%d", &choice);
        if(1<= choice && choice <= students){
            while(arvosana == -1){
                printf("Enter grade (0 - 5) for student %d or -1 to cancel: ", choice);
                scanf("%d", &arvosana);
                if(0<= arvosana <= 5){
                    numerot[choice -1] = arvosana;
                }
                else{
                    printf("Invalid grade!\n");
                }
            }
        }
        else if(choice == 0){
        }
        else{
            printf("Invalid student number!\n");
        }
        arvosana = -1;
    }
    printf("\n%-10s %-10s\n", "Student", "Grade");
    for(int i = 0; i < students; i++){
        if(0 <= numerot[i] && numerot[i] <= 5){
            printf("%-10d %-10d\n", i + 1, numerot[i]);
        }
        else{
            printf("%-10d %-10s\n", i + 1, "N/A");
        }
    }
}