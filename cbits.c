/*
 * Bit Operations Library
 *
 * Implementation of basic bitwise operations using a custom Bit enum (HIGH/LOW).
 *
 * Copyright (C) 2025 Ely Torres Neto
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>
#include "cbits.h"

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

Bit xorGate(Bit bits[], size_t n_bits)
{
    if (n_bits <= 0)
    {
        fprintf(stderr, "cbits.c-err: n_bits parameter shouldn't be equal or less than zero.");
        exit(-1);
    }

    if (!bits)
    {
        fprintf(stderr, "cbits.c-err: invalid array for bits.");
        exit(-1);
    }

    Bit result;

    for (int i = 0; i < n_bits - 1; i++)
    {
    }
}