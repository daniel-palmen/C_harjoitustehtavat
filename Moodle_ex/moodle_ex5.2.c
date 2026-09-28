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
    unsigned int value = 0;
    int check = 0;
    int i = 0;
    for(i = 0; str[i] != '\0' && check != 1; i++){
        if(str[i] == '0' && str[i+1] == 'b'){
            check = 1;
            i += 1;
        }
    }
    if(check == 1){
        while (str[i] == '1' || str[i] == '0'){
            value = value << 1;
            value = value + (str[i] - '0');
            i++;
        }
        *pu = value;
        return true;
    }
    return false;
}

int digit_counter(unsigned int nr){
    int count = 0;
    do {
        count++;
        nr = nr >> 4;
    } while (nr != 0);
    return count;
}