# ft_print_comb.c

## Escribe una función que muestre, en orden creciente, todas las combinaciones posibles de tres dígitos distintos.

Para este ejercicio hay que conseguir todas las combinaciones de tres dígitos ascendentes sin repetición, separando por coma y espacio cada combinación hasta llegar a la última, 789.

Para ello se usan los bucles while anidados de la siguiente manera:

```
void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a != '7')
					write(1, ", ", 2);
				c++;
			}
			b++;
		}		
		a++;
	}
}

```

En la función declaramos tres variables tipo int, la primera inicializada al valor de carácter 0 para las centenas, la segunda al valor de la primera mas uno y la tercera a su vez al valor de la segunda más uno.

Con esto obtenemos un dígito para las centenas (a), otro para las decenas (b), y otro para las unidades (c).

Las unidades van desde 2 hasta 9, las decenas desde 1 hasta 8 y las centenas desde 0 hasta 7, ya que es la manera de evitar que los dígitos se repitan en sus combinaciones.

La forma como trabaja el código es la siguiente:

Se llega al bucle interno con los valores de 0 1 2 para a b y c respectivamente.  

Entonces se imprime la combinación completa seguida de una coma y un espacio además de aumentar c en uno hasta que las unidades llegan a 9, momento en que se pasa de 019 a 023.

Ahora se repite el proceso hasta que b llega a aumentar hasta su valor máximo, que es 8, momento en el cual se pasará de 089 a 123.

Entonces se continuará imprimiendo las unidades y decenas para el nuevo valor de las centenas (1), seguido de una coma y un espacio hasta que las centenas lleguen a alcanzar el valor de 7.

 Será el último dígito en aumentar de valor, además al ser 7, el condicional if interno no se cumplirá y no se imprimirá coma ni espacio. También ocurrirá que se saldrá del bucle while porque después del último aumento, a tendrá el valor de 8.
