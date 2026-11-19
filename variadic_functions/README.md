# 0x10. C - Variadic functions

## Description

This project is about variadic functions in the C programming language.

It introduces the concept of functions that accept a variable number of arguments and explains how to use the macros provided by the `stdarg.h` header file.

It also covers the use of the `const` type qualifier.

## Learning Objectives

At the end of this project, you should be able to explain:

- What variadic functions are.
- How to use `va_start`, `va_arg` and `va_end` macros.
- Why and how to use the `const` type qualifier.

## Requirements

- All files are compiled on Ubuntu 20.04 LTS using `gcc`.
- Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files end with a new line.
- Code follows the Betty coding style.
- No global variables are allowed.

### 2. One woman's constant is another woman's variable

**File:** `2-print_strings.c`

**Prototype:**
`void print_strings(const char *separator, const unsigned int n, ...);`

This function prints a list of strings separated by a given separator.

- `separator` is the string printed between strings.
- `n` is the number of strings passed to the function.
- If `separator` is NULL, it is not printed.
- If a string is NULL, `(nil)` is printed instead.
- A new line is printed at the end.
