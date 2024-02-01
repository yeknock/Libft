#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int ft_isalpha(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char* str);
char* ft_strchr(const char* str, int c);
char* ft_strrchr(const char* str, int c);
void* ft_memset(void* b, int c, size_t length);
void ft_bzero(void* b, size_t length);
void* ft_memcpy(void* dst, const void* src, size_t n);
void* ft_memmove(void* dst, const void* src, size_t len);
size_t ft_strlcpy(char* dst, const char* src, size_t dst_size);
size_t ft_strlcat(char* dst, const char* src, size_t dst_size);

#endif