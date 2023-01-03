#include "main.h"

/**
 *_memset - Fills the first @n bytes of the memory @s with @c.
 *@s: A pointer to the memory.
 *@c: The character to fill the memory.
 *@n: The number of bytes.
 *Return: A pointer to the filled memory @s.
 */

void *_memset(void *s, int c, size_t n)
{
unsigned int index;
unsigned char *memory = s, value = c;

for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
