#ifndef CBIT_H
#define CBIT_H
#include <stdbool.h>
typedef enum
{
    HIGH = 1,
    LOW = 0
} Bit;

Bit bit_and(Bit a, Bit b);
Bit bit_xor(Bit a, Bit b);
Bit bit_or(Bit a, Bit b);
void bit_print(Bit a);

#endif