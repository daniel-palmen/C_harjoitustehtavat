#include <stdio.h>

bool binary_parser(const char *str, unsigned int *pu); 

int digit_counter(unsigned int nr);

int main(){
    char *str = "0b1001";
    unsigned int val = 0;
    if (binary_parser(str, &val)){
        printf("Decimal: %u\nHex: %08X\nHex digits needed: %d", val, val, digit_counter(val));
    } 
    else printf("Failed to parse binary\n");
}

bool binary_parser(const char *str, unsigned int *pu){
    int check = 0;
    int i = 0;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == '0' && str[i+1] == 'b'){
            check = 1;
        }
    }
    if(check = 1){
        
    }

}

int digit_counter(unsigned int nr){

}