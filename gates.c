#include <stdio.h>
#include <string.h>
#include "gates.h"
#include "cbits.h"

Bit gateBitToBit(Gates_Types GATE_SELECT, Bit bits[], size_t n)
{
    if (!bits || n == 0)
    {
        puts("Error: bits not defined or size is 0.");
        exit(-1);
    }

    Bit (*funct)(Bit, Bit) = NULL;

    switch (GATE_SELECT)
    {
    case AND:
        funct = bit_and;
        break;
    case OR:
        funct = bit_or;
        break;
    default:
        puts("Error: Invalid gate type!");
        exit(-1);
    }

    Bit result = bits[0];

    for (size_t i = 1; i < n; i++)
    {
        result = funct(result, bits[i]);
    }

    return result;
}