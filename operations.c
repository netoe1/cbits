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

#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

static void validateBit(Bit bit)
{
    if (bit && !bit)
    {
        fprintf(stderr, "\noperations.c:validateBit(): Invalid values for bit! Must be 0 or 1!");
        goto fail;
    }

    return;

fail:
    exit(-1);
}

Bit bit_and(Bit a, Bit b)
{

    return (a & b);
}

Bit bit_xor(Bit a, Bit b)
{
    return (a ^ b);
}

Bit bit_or(Bit a, Bit b)
{

    return (a | b);
}

Bit bit_nand(Bit a, Bit b)
{
    return !(a & b);
}

Bit bit_nor(Bit a, Bit b)
{
    return !(a | b);
}

Bit bit_xnor(Bit a, Bit b)
{
    return !(a ^ b);
}

Bit bit_not(Bit a)
{
    return !a;
}

void bit_print(Bit a)
{
    validateBit(a);
    printf("%d\n", (int)a);
}