#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    aff_z(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] == 'z')
        {
            ft_putchar('z');
            break;
        }
        else 
        {
            ft_putchar('z');
            break;
        }
        i++;
        
    }
    
    return (*str);
}

int     main(int argc, char **argv)
{
    if (argc >= 2)
    {
        aff_z(argv[1]);
    }
    else 
    {
        ft_putchar('z');
    }
    ft_putchar('\n');
    return (0);
}