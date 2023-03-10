/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negtive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarin-l <amarin-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:06:15 by amarin-l          #+#    #+#             */
/*   Updated: 2023/02/15 20:37:34 by amarin-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n)
{
	char	negative;

	if (n < 0)
	{
		negative = 'N';
		write (1, &negative, 1);
	}	
	else
	{
		negative = 'P';
		write (1, &negative, 1);
	}
}

int	main(void)
{
	ft_is_negative(-55);
	return (0);
}
