#include "cbits.h"
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "");
    Bit bits[] = {0, 1, 0, 1, 0, 1};
    Bit x = gateBitToBit(AND, bits,6);
    bit_print(x);

    return 0;
}