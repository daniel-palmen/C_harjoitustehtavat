#include <stdio.h>
#include <stdlib.h>

int menu(void);
int read_integer(void);
int dice(int sides);

int main(){
    int selection;
    int sides;
    int value;
    while(selection != 0){
        menu();
        selection = read_integer();
        if(selection == 1){
            sides = 6;
            value = dice(sides);
            printf("Result %d\n", value);
        }
        else if(selection == 2){
            sides = 10;
            value = dice(sides);
            printf("Result %d\n", value);
        }
    }
    printf("Thank you Bye!\n");
}

int menu(void){
    printf("Select function:\n");
    printf("1) Roll d6\n");
    printf("2) Roll d10\n");
    printf("0) Quit\n");
    printf("Enter selection: ");
    return 0;
}

int read_integer(void){
    int result;
    int selection;
    result = scanf("%d", &selection);
    if(result != 1){
        printf("Invalid input.\n");
        while(getchar() != '\n');
        return -1;
    }
    else{
        return selection;
    }
}

int dice(int sides){
    int value;
    value = rand() % sides + 1;
    return value;
}