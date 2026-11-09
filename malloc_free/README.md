# malloc_free

This directory contains exercises about dynamic memory allocation in C using `malloc` and `free`.

## 0. Float like a butterfly, sting like a bee

The `create_array` function creates an array of characters and initializes it with a specific character.

- Returns `NULL` if the size is 0.
- Returns `NULL` if memory allocation fails.
- Returns a pointer to the allocated array otherwise.

**Prototype:** `char *create_array(unsigned int size, char c);`
