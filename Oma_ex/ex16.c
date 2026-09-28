#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} nnode;

int main(){
    int number = 0;
    int end = 0;
    char input[100];
    nnode *head = NULL;
    nnode *current;
    nnode *new_node;
    while(end == 0){
        printf("Enter a number or type end to end: ");
        fgets(input, 100, stdin);
        if(sscanf(input, "%d", &number) == 1){
            new_node = malloc(sizeof(nnode));
            new_node->number = number;
            new_node->next = NULL;
            if(head == NULL){
                head = new_node;
            }
            else{
                current = head;
                while(current->next != NULL){
                    current = current->next;
                }
                current->next = new_node;
            }

        }
        else{
            if(input[0] == 'e' && input[1] == 'n' && input[2] == 'd'){
                end = 1;
            }
            else{
                printf("Incorrect input.\n");
            }
        }
    }
    //printings and clear mem
    current = head;
    while(current != NULL){
        printf("%d\n",current->number);
        current = current->next;
    }
    while(head != NULL){
        current = head;
        head = head->next;
        free(current);
    }
    printf("Memory freed.");
}