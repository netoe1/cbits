#ifndef BITOP_H
#define BITOP_H
#include <stdlib.h>
#include "bit-impl.h"

Bit bit_and(Bit a, Bit b); // Make AND operation between two bits.
Bit bit_xor(Bit a, Bit b); // Make XOR operation between two bits.
Bit bit_or(Bit a, Bit b);  // Make OR operation between two bits.
void bit_print(Bit a);     // Print on terminal the *integer* value of a bit.



#endif