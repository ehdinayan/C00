#include <unistd.h>

void ft_putchar(char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0') // obtenemos la longitud de la cadena
    {
        i++;
    }
    write(1, c, i); // escribimos la cadena completa en la salida estándar
}

int main()
{
    char str[] = "hola como estas\n";
    ft_putchar(str);
    return (0);
}
