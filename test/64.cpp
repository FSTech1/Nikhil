#include<stdio.h>
#include<stdint.h>
uint64_t swapEvenOddBits(uint64_t num) 
{
    uint64_t even_mask = 0xAAAAAAAAAAAAAAAA; 
    uint64_t odd_mask = 0x5555555555555555;  
    uint64_t even_bits = num & even_mask;
    uint64_t odd_bits = num & odd_mask;
    even_bits >>= 1;
    odd_bits <<= 1;
    return even_bits | odd_bits;
}
int main() 
{
    uint64_t num = 0b1101011010110011; 
    printf("Original number: %llu\n", num);
    uint64_t swapped_num = swapEvenOddBits(num);
    printf("Number after swapping even and odd bits: %llu\n", swapped_num);
    return 0;
}
