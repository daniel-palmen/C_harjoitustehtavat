#include <stdio.h>
#include <stdint.h>

void print_binaryw(uint32_t value, uint32_t width); 

int main(){
    print_binaryw(2, 1);
    print_binaryw(1, 8);
    print_binaryw(2019, 12);
}

void print_binaryw(uint32_t value, uint32_t width){
    int start = 31;
    while(start > 0 && (value & (1U << start)) == 0 && start >= (int)width){
        start--;
    }
    for(int i = start; i >= 0; i--){
        printf("%u", (value >> i) & 1U);
    }
}