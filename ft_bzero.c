#include <stddef.h>

void ft_bzero(void* b, size_t length)
{
    unsigned char* s = b;
    while (length-- > 0)
    {
        *s++ = 0;
    }
}