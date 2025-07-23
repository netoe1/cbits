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
    case XNOR:
        funct = bit_xnor;
        break;
    case NOR:
        funct = bit_nor;
        break;
    case NAND:
        funct = bit_nand;
        break;
    case XOR:
        funct = bit_xor;
        break;
    default:
        puts("gates.c:gateBitToBit(): Invalid gate type!");
        exit(-1);
    }

    Bit result = bits[0];

    for (size_t i = 1; i < n; i++)
    {
        result = funct(result, bits[i]);
    }

    return result;
}