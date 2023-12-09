/*
char *ft_strchr(const char *s, int c) {
    while (*s) {
        if (*s == (char)c) {
            return (char *)s;  // Возвращаем указатель на найденный символ
        }
        s++;
    }

    if (*s == (char)c) {
        return (char *)s;  // Возвращаем указатель, если символ '\0' (конец строки)
    }

    return NULL;  // Возвращаем NULL, если символ не найден
}

size_t ft_strspn(const char *s, const char *accept) {
    size_t count = 0;

    while (*s && ft_strchr(accept, *s)) {
        count++;
        s++;
    }

    return count;
}*/

size_t	ft_strspn(const char *s, const char *accept)
{

}


// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);