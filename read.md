# Lógica de programação em C
Exercises in c on algorithms and data structure.

### Como executar um algoritmo em C.
* Para executar, temos que compilar o programa. Criando assim um executavel do programa.

```
1° gcc (name_file).c -o name_file
2° ./name_file
```

### Saída de dados: `printf()`
* Sintaxe:
```printf(<texto>, <v1>, <v2>, ..., <Vn>);```
* Uso: 0, 1 ou N variáveis

`Específicadores de formato: printf()`

| Dígito | Descrição 
|--- |--- |
| d ou i | Números inteiros em base decimal 
| x | Números inteiros em base Hexadecimal
| f | Números em ponto flutuante (casa decimal)
| e | Números em noação científica
| c | Caracteres alfa numéricos
| c | Sequência de caracteres Alfanuméricos (texto)
| <.num> | Específica quantos dígitos serão impressos após a vírgula

`Sequência de escape do printf()`

| Escape | Descrição 
|--- |--- |
| \a | Toca um bipe, alarme sonoro padrão do sistema
| \b | Backspace
| \n | Quebra de linha 
| \t | Tabulação horizontal (TAB)
| \r | Retorna ao innicío da  linha
| \o | Caractere nulo 
| \v | Tabulação vertical
| \\\ | Caractere \
| \\' | Caractere '
| \\" | Caractere "
| \\? | Caractere ?
| \\123 | Caractere relacionado ao código 123 em octal (ASCII)
| \\x12 | Caractere relacionado ao código 12 em Hexadecimal (ASCII)
| %% | Caractere % 


### Saída de dados com: `scanf()`:
* Sintaxe: `scanf(<form.>, &<v1.>, &<v2.>, ..., &<vN.>);`

### Váriaveis
* Espaço em memórias para armazenar dados
* Sintax declaração: `<.tipo><.nome>;` 