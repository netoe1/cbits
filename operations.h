/* Copyright 2025 Ely Torres Neto

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
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