#include <stddef.h>

void* ft_memset(void* b, int c, size_t length)
{
    unsigned char* p = b;
    while(length-- > 0)
    {
        *p++ = (unsigned char)c;
    }

    return (b);
}