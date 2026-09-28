#include <stdio.h>
#include <stdint.h>

uint32_t get_bits(uint32_t value, uint32_t shift, uint32_t bits); 

int main(){
    get_bits(1, 0, 1);
    get_bits(15, 1, 4);
}

uint32_t get_bits(uint32_t value, uint32_t shift, uint32_t bits){
    value >>= shift;
    value &= (1U << bits) - 1;

    return value;
}