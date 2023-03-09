/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarin-l <amarin-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:48:01 by amarin-l          #+#    #+#             */
/*   Updated: 2023/02/16 21:10:45 by amarin-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		letra;

	letra = 122;
	while (letra >= 97)
	{
		write(1, &letra, 1);
		letra--;
	}		
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
