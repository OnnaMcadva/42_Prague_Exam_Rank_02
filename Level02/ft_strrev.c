
char    *ft_strrev(char *str)
{
	int i;
	int len;
	char temp;

    i = -1;
    len = 0;
	while (str[len])
		len++;
	while (++i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - (i + 1)];
		str[len - (i + 1)] = temp;
	}
	return (str);
}

// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);
