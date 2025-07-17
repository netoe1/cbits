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

#ifndef CBITS_H
#define CBITS_H
#include <stdbool.h>
typedef enum
{
    HIGH = 1,
    LOW = 0
} Bit;

Bit bit_and(Bit a, Bit b); // Make AND operation between two bits.
Bit bit_xor(Bit a, Bit b); // Make XOR operation between two bits.
Bit bit_or(Bit a, Bit b);  // Make OR operation between two bits.
void bit_print(Bit a);     // Print on terminal the *integer* value of a bit.

#endif