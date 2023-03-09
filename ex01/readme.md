# ft_print_alphabet.c

## Escribe una función que muestre el alfabeto en minúsculas en una sola línea, en orden creciente, empezando en la letra “a”.

Esta función contiene el codigo siguiente:

```
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 'a';
	while (letra <= 'z')
	{
		write(1, &letra, 1);
		letra++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
```

La particularidad aquí aunque ésta función es muy similar a las anteriores, es que no pasamos ningún parámetro a la función ni en main ni en su declaración. En cambio, se declara la variable tipo char llamada letra dentro de la función y se inicializa al valor 'a'.

Luego, en el bucle while se establece que mientras el valor de letra sea menor o igual al carácter final del abecedario que se desea imprimir, es decir, z, se vaya escribiendo el contenido actual de letra y aumentando su valor en uno para el siguiente bucle.

Importante notar que la función write vuelve a recibir una dirección como parámetro y no directamente una variable de tipo primitivo.
