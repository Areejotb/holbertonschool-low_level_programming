# malloc_free

Projects and exercises about dynamic memory allocation in C
using `malloc` and `free`.

## Files

- `main.h`: header file with the function prototypes.
- `0-create_array.c`: creates an array of chars and initializes
  it with a specific char.

## Compilation

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a

## Function

    char *create_array(unsigned int size, char c);

Returns a pointer to the new array, or `NULL` if `size` is 0
or if `malloc` fails.
