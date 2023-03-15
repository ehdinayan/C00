# ft_print_combn.c

## Escribe una función que muestre todas las combinaciones de n dígitos en orden creciente.

Con este código consigo devolver un array de igual número de elementos al valor pasado como parámetro e inicializados a cero:
```
#include <unistd.h>

void ft_print_combn(int n)
{
  char buffer[n];
  int i;

  i = 0;
  buffer[n] = '\0'; //el caracter nulo determina la longitud y permite el uso de write
  while(i < n)
  {
    buffer[i] = '0';
    i++;
  }
  write(1, buffer, n);
}


int main()
{
  ft_print_combn(7);
  return (0);
}
```
Para empezar declaro un array de caracteres de longitud igual al número pasado como parámetro. Luego inicializamos un contador para recorrer el array a 0 y añadimos un carácter nulo al final del arreglo.

Luego lo que se hace en el bucle simplemente es recorrer el arreglo e ir inicializando todos sus valores al carácter 0 para poder imprimir luego por pantalla todo el array entero con write.

Como no es lo suyo que todos los valores estén inicializados a cero, traté de hacer que todos se inicializaran a cero menos el último, que es apropiado que sea 1 para la primera combinación:

```
#include <unistd.h>

void ft_print_combn(int n)
{
  char buffer[n];
  int i;
  int last;

  i = 0;
  last = n - (n - 1);
  last = last + '0';

  void  ft_putchar()
  {
    n = n - 1;
    write(1, buffer, n);
    write(1, &last, 1);
    write(1, ", ", 2);
    n = n + 1;
  }

  while(i < n)
  {
    buffer[i] = '0';
    i++;
    if(i == n)
    {
      ft_putchar();
    }
  }
}

int main()
{
  ft_print_combn(7);
  return (0);
}
```

La única diferencia aquí es que he añadido una variable para la última posición del arreglo antes del carácter nulo. También hay un condicional dentro del bucle while para ver si efectivamente nos encontramos en dicha posición del array.

Si es el caso se llama a la función ft_putchar, que lo que hace es imprimir el array entero menos la última posición, es decir, sólo los ceros. Luego imprime la variable last y finalmente la coma y el espacio antes de la siguiente combinación, por último devuelve n a su valor correcto (el del entero pasado como parámetro).

Como llegados a este punto i ya no es menor que n, no se vuelve a procesar el bucle while y el programa termina su ejecución.

Tal como está no compila bien aunque funciona en simulador, pero como igualmente falta hacer muchas cosas y está complicado para mí saber como hacerlas, aquí lo voy a dejar. Queda pendiente de actualización cuando tenga más conocimiento. A otra cosa mariposa!
