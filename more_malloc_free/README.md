# more_malloc_free

Exercises about dynamic memory allocation in C
using `malloc`, `free`, `calloc` and `realloc`.

## Files

- `main.h`: header file with the function prototypes.
- `0-malloc_checked.c`: allocates memory with `malloc` and
  terminates the process with status 98 if it fails.

## Compilation

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
