# cbits

**cbits** é uma pequena biblioteca em C para operações básicas com bits, ideal para fins educacionais, testes de lógica binária ou integração com projetos maiores que envolvem manipulação de dados em baixo nível.

## ✨ Funcionalidades

- Operações bit a bit (`AND`, `OR`, `XOR`, `NOT`,`NAND`,`NOR`,`XNOR`,)
- Representação e manipulação de bits como tipo abstrato
- Suporte a arrays de bits
- Interface modular e reutilizável

## 📁 Estrutura

```
cbits/
├── include/
│ └── cbits.h # Header principal com definições
├── src/
│ └── cbits.c # Implementação das funções
├── examples/
│ └── main.c # Exemplo de uso da biblioteca
└── LICENSE # Apache License 2.0
```

## 🚀 Como usar

```bash
git clone https://github.com/netoe1/cbits.git
cd cbits
make clean
make all
```

```c
#include "cbits.h"

Bit a = 0; // Você pode usar Bit a = HIGH!
Bit b = 1;
Bit result = bit_and(a, b);  // resultado: 0 ou LOW

```

# 📜 Licença
Este projeto está licenciado sob a Apache License 2.0.
Você pode usar livremente para fins pessoais, acadêmicos ou comerciais, com a devida citação ao autor original.

- Autor: Ely Neto
- GitHub: @netoe1


# Contribuidores
Caso queira contribuir no projeto, entre em contato comigo pelo email: elynetobr@gmail.com.


# Observações Finais
O readme está sujeito à alterações, bem como as licenças de uso!
