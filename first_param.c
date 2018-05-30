#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    first_param(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    return (*str);
}

int     main(int argc, char **argv)
{
    if(argc >= 2)
    {
        first_param(argv[1]);
    }
    ft_putchar('\n');
    return (0);
}