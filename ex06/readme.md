# ft_print_comb2

## Escribe una función que muestre todas las combinaciones posibles de dos números (XX XX) entre 0 y 99, en orden creciente.

En esta función se requiere lo mismo que para la anterior, con el añadido de que esta vez se trata de 4 dígitos en vez de tres. El resultado de la primera combinación ha de ser 00 01, y el de la última 98 99$.

Siguiendo la lógica del ejercicio anterior, traté de conseguir el resultado añadiendo una variable mas y un bucle anidado mas, pero el hecho de que aunque sean 4 dígitos siguen siendo en realidad son dos números (uno entre 00 y 98 y el otro entre 01 y 99) me complicaba los valores de inicialización de las variables.

Lo más que conseguí fue que cada vez que el primer grupo de dos dígitos aumentaba en 1 el otro grupo siempre empezaba por 00 y el ejercicio no pedía eso. Aquí comparto el código del primer intento:
```
#include<unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	int		c;
	int		d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b < '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					write (1, &a, 1);
					write (1, &b, 1);
					write (1, "  ", 2);
					write (1, &c, 1);
					write (1, &d, 1);
					write(1, ", ", 2);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

```

Además de que falta el condicional para que cuando se imprima el último número ya no aparezca la coma ni el espacio, mi falla principal era que las funciones de más de 25 líneas no son muy recomendables, por lo que traté de investigar otra forma de hacerlo y conseguí la alternativa siguiente:

```
#include<unistd.h>

void ft_print_comb2_b(void)
{
  int a;
  int b;
  char buffer[5];

  a = 0;
  while (a <= 98)
  {
    b = a + 1;
    while (b <= 99)
    {
      buffer[0] = a / 10 + '0';
      buffer[1] = a % 10 + '0';
      buffer[2] = ' ';
      buffer[3] = b / 10 + '0';
      buffer[4] = b % 10 + '0';
      write(1, buffer, 5);
      if (a != 98)
      {
        write(1,", ", 1);
      }
      else write(1, "\n", 1);
      b++;
    }
    a++;
  }
}
```

En esta forma el código escribe de golpe los 4 dígitos con el espacio en medio, porque se ha definido un array de tipo char con 5 posiciones llamado buffer. En él se encuentran los valores enteros separados en dos dígitos a través de la operación de división y módulo de diez.

Cuando se asigna el digito a cada posición del array, nos aseguramos de estar almacenándolo como caráter al sumarle '0'. Si no lo hacemos asi, write nos devolvería los símbolos correspondientes a los valores ASCII en vez de nuestros dígitos.

Por otro lado, es una de las pocas sino la única vez que pasamos como parámetro a write buffer directamente y no &buffer, aunque lo he comprobado y parece funcionar bien igual.
