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

#include "cbits.h"
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "");
    Bit bits[] = {0, 1, 0, 1, 0, 1};
    Bit x = gateBitToBit(AND, bits, 6);
    bit_print(x);

    return 0;
}