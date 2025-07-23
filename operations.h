#ifndef BITOP_H
#define BITOP_H
#include <stdlib.h>
#include "bit-impl.h"

Bit bit_and(Bit a, Bit b);  // Make AND operation between two bits.
Bit bit_xor(Bit a, Bit b);  // Make XOR operation between two bits.
Bit bit_or(Bit a, Bit b);   // Make OR operation between two bits.
Bit bit_nand(Bit a, Bit b); // Make NAND operation between two bits.
Bit bit_nor(Bit a, Bit b);  // Make NOR operation between two bits.
Bit bit_xnor(Bit a, Bit b); // Make XNOR operation between two bits.
Bit bit_not(Bit a);         // Make NOT operation in one bit.
void bit_print(Bit a);      // Print on terminal the *integer* value of a bit.

#endif