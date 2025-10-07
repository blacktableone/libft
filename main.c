#include "libft.h"
#include <stdio.h>

int main (void)
{
    // //test ft_isalpha
    // printf("ft_isalpha('A') = %d\n",ft_isalpha('A'));
    // printf("ft_isalpha('0') = %d\n",ft_isalpha('0'));
    // printf("ft_isalpha('?') = %d\n",ft_isalpha('?'));

    // //test ft_isdigit
    // printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));
    // printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
    // printf("ft_isdigit('2') = %d\n", ft_isdigit('2'));
    // printf("ft_isdigit('!') = %d\n", ft_isdigit('!'));

    //test ft_isalnum
    printf("ft_isalnum('0') = %d\n", ft_isalnum('0'));
    printf("ft_isalnum('t') = %d\n", ft_isalnum('t'));
    printf("ft_isalnum('+') = %d\n", ft_isalnum('+'));


    // // test ft_strlen
    // printf("len of 'hello' is %zu\n",ft_strlen("hello"));
    // printf("len of 'hello\n' is %zu\n",ft_strlen("hello\n"));
    // printf("len of '' is %zu\n",ft_strlen(""));
    
    return 0;
}