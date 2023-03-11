/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarin-l <amarin-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:43:09 by amarin-l          #+#    #+#             */
/*   Updated: 2023/02/18 15:32:59 by amarin-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

int main() 
{
    ft_print_comb2();
    return (0);
}
