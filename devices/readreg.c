#include <stdio.h>

void cpuid(int code, unsigned int* a, unsigned int* b, unsigned int* c, unsigned int* d) {
    asm volatile("cpuid"
                 : "=a" (*a), "=b" (*b), "=c" (*c), "=d" (*d)
                 : "a" (code));
}

int main() {
    unsigned int eax, ebx, ecx, edx;
    unsigned int cache_type, cache_level, cache_sets, cache_associativity, cache_line_size;

    // Get cache information using CPUID
    cpuid(0x2, &eax, &ebx, &ecx, &edx);

    // Extract cache information from registers
    cache_type = eax & 0x1F;
    cache_level = (eax >> 5) & 0x7;
    cache_sets = (ebx & 0xFFF) + 1;
    cache_associativity = ((ebx >> 12) & 0xF) + 1;
    cache_line_size = (ecx & 0xFFF) + 1;

    printf("Cache Type: %u\n", cache_type);
    printf("Cache Level: %u\n", cache_level);
    printf("Cache Sets: %u\n", cache_sets);
    printf("Cache Associativity: %u\n", cache_associativity);
    printf("Cache Line Size: %u\n", cache_line_size);

    return 0;
}


