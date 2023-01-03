#include "main.h"

/**
 *_memset - Fills the first @n bytes of the memory @s with @b.
 *@s: A pointer to the memory.
 *@b: The character to fill the memory.
 *@n: The number of bytes.
 *Return: A pointer to the filled memory @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
unsigned char *memory = s, value = b;

for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
