#include <stdio.h>
#include <stdlib.h>
#include "cbit.h"

static void validateBits(Bit bits[])
{
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
}