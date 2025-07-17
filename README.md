# Bit Operations Library

Este projeto implementa operações básicas de lógica bit a bit usando um tipo `Bit` personalizado em C.

## Tipos

- `Bit` — enumeração com valores `HIGH` (1) e `LOW` (0).

## Funções

- `bit_and(Bit a, Bit b)` — retorna `HIGH` se ambos os bits forem `HIGH`, caso contrário `LOW`.
- `bit_or(Bit a, Bit b)` — retorna `HIGH` se pelo menos um dos bits for `HIGH`.
- `bit_xor(Bit a, Bit b)` — retorna `HIGH` se os bits forem diferentes.

## Como usar

Inclua o header `cbit.h` e linke com o arquivo `.c` contendo as funções. Exemplo básico:

```c
#include "cbit.h"

Bit a = HIGH;
Bit b = LOW;

Bit resultado = bit_xor(a, b);
```
