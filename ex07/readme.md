# ft_putnbr

## Escribe una función que muestre el número que se ha usado como parámetro. La función deberá ser capaz de mostrar todos los valores posibles en una variable de tipo int.

Para ésta función se pone en práctica el concepto de recursividad, donde en un momento dado la función se llama a si misma para volver a ejecutar los algoritmos anteriores. El códigp es el siguiente:

```
#include<unistd.h>
#include<stdlib.h>

void ft_putnbr(int nb)
{
  char digit;
  int minvalue;

  minvalue = -2147483648;

  if(nb == minvalue)
  {
    write(1, "-2147483848", 11);
    exit (0);
  }
  if (nb < 0)
  {
    write(1, "-", 1);
    nb = -nb;
  }
  if (nb >= 10)
  {
    ft_putnbr(nb/10);
  }
  digit = '0' + (nb % 10);
  write(1, &digit, 1);
}
```
Hay un asunto que aclarar y se trata de los valores mínimo y máximo para una variable de tipo int.

el mínimo es -2147483648 y el máx 2147483647.

Cuando se pasa un núm negativo como parámetro que no es el valor mínimo, la función escribe el signo menos delante del número en la salida, pero le cambia el signo para trabajar con el valor positivo internamente.

Luego, la recursividad entra en juego ya que la función se llama a si misma pasándose como parámetro el resultado entero de la división entre 10 de nb (núm positivo).

Esto ocurrirá hasta que el número resultante sea un sólo dígito, momento en el que se ejecutará el siguiente condicional.
En el, se escribe en la salida el resto (o modulo) entero del numero por 10.

Este proceso se irá repitiendo con todos los valores almacenados en las anteriores llamadas recursivas, pero sólo se imprimirá el último dígito de cada nb, ya que el previo se habrá sacado en el paso anterior.

Cuando todos los valores de nb guardados por recursividad han sido escritos, la función termina de ejecutarse.

En el caso de que se pase como parámetro el valor mínimo, entonces al intentar cambiar el signo habría un desbordamiento de enteros, ya que el valor resultante sería superior al valor positivo posible para amacenar en una variable tipo int. Por ese motivo hay una condición explícita para devolver el numero completo como string usando write y sin tener que hacer ninguna operación.

Por último, se implementa el fichero stdlib.h para poder hacer uso del comando exit (0) después de devolver el valor mínimo.
