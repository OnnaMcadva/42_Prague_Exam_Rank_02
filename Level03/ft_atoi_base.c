
// нет проверки Those are, of course, to be trimmed according to the requested base.

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
    while (str[i])
    {
        result *= str_base;
        if ('0' <= str[i] && str[i] <= '9')
            result += str[i] - '0';
        else if ('A' <= str[i] && str[i] <= 'F')
            result += str[i] - 'A' + 10;
        else if ('a' <= str[i] && str[i] <= 'f')
            result += str[i] - 'a' + 10;
        i++;
    }
	return (result * sign);
}

// #include <stdio.h>

// int main()
// {
//     printf("100001/2: %d\n", ft_atoi_base("100001", 2));
//     printf("0201/4: %d\n", ft_atoi_base("0201", 4));
//     printf("53/6: %d\n", ft_atoi_base("53", 6));
//     printf("41/8: %d\n", ft_atoi_base("41", 8));
//     printf("33/10: %d\n", ft_atoi_base("33", 10));
//     printf("29/12: %d\n", ft_atoi_base("29", 12));
//     printf("19b/14: %d\n", ft_atoi_base("19b", 14));
//     printf("19B/14: %d\n", ft_atoi_base("19B", 14));    
//     printf("14d/16: %d\n", ft_atoi_base("14d", 16));
//     printf("14D/16: %d\n", ft_atoi_base("14D", 16));
//     printf("Decimal value: %d\n", ft_atoi_base("12FDB3", 16));
//     printf("Decimal value: %d\n", ft_atoi_base("1010", 2));
//     printf("Decimal value: %d\n", ft_atoi_base("-1A", 16));

//     return 0;
// }

// Assignment name  : ft_atoi_base
// Expected files   : ft_atoi_base.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef
// Those are, of course, to be trimmed according to the requested base. For
// example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are the first character of the
// string.

// Your function must be declared as follows:

// int	ft_atoi_base(const char *str, int str_base);

// bool is_valid_char(char c, int str_base)
// {
//     int max_digit = (str_base <= 10) ? ('0' + str_base - 1) : ('A' + str_base - 11);

//     return ('0' <= c && c <= max_digit) || (str_base > 10 && ('a' <= c && c <= 'f' || 'A' <= c && c <= 'F'));
// }
