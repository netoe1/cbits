#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

static void validateBit(Bit bit)
{
    if (bit != 0 || bit != 1)
    {
        fprintf(stderr, "\ncbits.c-err: Invalid values for bit! Must be 0 or 1!");
        goto fail;
    }

    if (!bit)
    {
        fprintf(stderr, "\ncbits.c-err: Invalid value for bit!");
        goto fail;
    }

    return;

fail:
    exit(-1);
}

Bit bit_and(Bit a, Bit b)
{

    if (a & b)
    {
        return HIGH;
    }
    return LOW;
}

Bit bit_xor(Bit a, Bit b)
{
    if (a ^ b)
    {
        return HIGH;
    }

    return LOW;
}

Bit bit_or(Bit a, Bit b)
{

    if (a | b)
    {
        return HIGH;
    }
    return LOW;
}

void bit_print(Bit a)
{
    validateBit(a);
    printf("%d", (int)a);
}
