#include <stddef.h>
#include <stdio.h>
#include <string.h>

// size_t ft_strlcpy(char* dst, const char* src, size_t dst_size)
// {
//     int i;

//     i = 0;
//     while (i < dst_size)
//     {
//         dst[i] = src[i];
//         i++;
//     }
//     dst[i] = '\0';
// }



int main()
{
    char a[] = "Hello world";
    char dst[20];
    int f = strlcpy(a, dst, 15);
    printf("%d",f); 

    return 0;
}