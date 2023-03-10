# print_numbers.c

## Escribe una función que muestre, en una sola línea y en orden creciente, todos los dígitos.

Esta función incluye el código siguiente:
```
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		write (1, &number, 1);
		number++;
	}
}
```

En la función declaramos una variable tipo char y la inicializamos al valor 0 entrecomillado.

Esto es lo mismo que haber usado una variable tipo int inicializándola a un entero sin comillas, pero sumándole '0' antes de usar la función write dentro del bucle, para convertir el número a un carácter.

Para este ejercicio así como para algunos anteriores no hace falta visualizar el main aquí, ya que se hace referencia únicamente a la función y no se le pasa ningún parámetro por main, simplemente se la llama para que se ejecute su algoritmo. 
