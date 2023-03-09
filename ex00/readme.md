# ft_putchar.c & ft_putchar_str.c

## ft_putchar.c

*Escribe una función que muestre el carácter usado como parámetro.*

En esta función tenemos el siguiente código:
```
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	ft_putchar('A');
	return (0);
}
```
en ella únicamente hay la función autorizada write para la que es necesario incluir el fichero unistd.h.

Se llama a la función en main con el carácter A entrecomillado, de lo contrario da el error de que es un valor desconocido que no ha sido declarado con anterioridad.

La función en si tiene pasado el parámetro c como valor sustituto del de la llamada en main, creo que eso convierte a c en un puntero al carácter de la llamada a la función, aunque no estoy seguro.

Si no se pone el signo & delante de c en la función write, da el error de que "La escritura de parámetros de Syscall(buf) apunta a bytes no direccionables", lo que supongo que significa que c es un puntero al parámetro pasado a la función en main y la función write necesita la dirección a la que apunta, para lo que es necesario el signo &. Igual estoy equivocado pero es la manera de que la función funcione.

## ft_putchar_str.c

Esta función sale de hacer pruebas intentando ver como podría pasar un string completo como parámetro y que write lo devolviera, en vez de solo un carácter. Creo que hay que hacer algo parecido en ejercicios posteriores, pero así voy corroborando y aprendo cosas.
El chat GPT me ha echado una mano:

```
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
```
 En este caso se declara en main antes de llamar a la función una cadena de carácteres (array) que se guarda en str.
 Este valor se usa como parámetro en el momento de llamar a la función.

 Ahora también hay la diferencia de que c está especificado directamente como puntero a str, con el simbolo "*".

 En el cuerpo de la función lo que se hace es usar un bucle while para determinar la longitud de la cadena, de forma que al usar write podamos incluir correctamente el número de caracteres a imprimir como tercer parámetro.

 En este caso parece que no es necesario incluir el & delante de c, probablemente porque en su declaración, la función ya recibe como parámetro un puntero a la cadena que se desea que se devuelva, aunque esto son conclusiones propias y tal vez esté equivocado.

 Vale la pena notar que aunque str incluye un salto de linea, un espacio nulo es asignado automáticamente detrás, lo que nos permite detectar la longitud de la cadena en el condicional del bucle while.

 Esto último se puede corroborar poniendo el código en phyton tutor. 
