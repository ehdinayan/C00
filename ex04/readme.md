# ft_is_negative.c

## Escribe una función que muestre “N” o “P” en función del signo del entero que se haya usado como parámetro. Si n es negativo muestra “N”. Si n es positivo o nulo muestra “P”.

Aquí está el código de la función con su explicación pertinente:

```
#include<unistd.h>

void	ft_is_negative(int n)
{
	char	negative;

	if (n < 0)
	{
		negative = 'N';
	}
	else
	{
		negative = 'P';
	}
    write (1, &negative, 1);
}

int	main(void)
{
	ft_is_negative(-55);
	return (0);
}
```
Esta función si que recibe un numero como parámetro que puede ser positivo, igual a cero (nulo), o negativo. Dependiendo de eso el resultado será P para positivo o nulo y N para negativo.

En el caso actual del main devuelve N, porque al llamar a la función se está usando como parámetro un número negativo.

En primer lugar se necesita una variable que guarde el valor del resultado que se ha de imprimir. Luego, un algoritmo que determine si el numero pasado como parámetro es mayor, igual o menor que cero. Esto se hace mediante los condicionales if, else.

Una vez se ha determinado cual debe ser el valor de nuestra variable se llama a la función write. En el script original lo hice con una llamada a write para cada una de las dos situaciones posibles, pero aquí lo pongo de forma más optimizada para no repetir código.
