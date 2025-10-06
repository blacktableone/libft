#include "libft.h"
#include <stdio.h>

int main (void)
{
    printf("len of 'hello' is %zu\n",ft_strlen("hello"));
    printf("len of 'hello\n' is %zu\n",ft_strlen("hello\n"));
    printf("len of '' is %zu\n",ft_strlen(""));
    return 0;
}