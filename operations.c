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
    printf("%d", (int)a);
}