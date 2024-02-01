char* ft_strchr(const char* str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] != c)
        i++;
    if (str[i] == '\0')
        return ((char *) 0);
    return ((char *)(str + i));
}