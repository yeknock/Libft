#include <stddef.h>

void* ft_memcpy(void* dst, const void* src, size_t n)
{
    const unsigned char* src_ = src;
    unsigned char* dst_ = dst;

    while (n--)
    {
        *dst_++ = *src_++;
    }
    return (dst);
}