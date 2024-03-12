#include <stdio.h>

void capitalize_next(char *str)
{
    int activador;
    int i;

    activador = 1;  
    i = 0;
/* Caps Activado próxima letra será mayus*/
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || (str[i] >= '0' && str[i] <= '9') || (str[i] < 'A' 
        || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))
        {
         activador = 1;
        }
        else if  (activador)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
         activador = 0;
        }
        i++;
    }
}

char *ft_strcapitalize(char *str)
{
    capitalize_next(str);

    return str;
}

int main(void)
{
    char input[] = "prueba jodida!de?verdad+-+-pero)($(/&))lo6783que3...hay";

    printf("Original: %s\n", input);

    ft_strcapitalize(input);

    printf("Capitalized: %s\n", input);

    return 0;
}
