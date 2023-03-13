/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarin-l <amarin-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:15:21 by amarin-l          #+#    #+#             */
/*   Updated: 2023/02/16 21:15:50 by amarin-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

int main()
{
  ft_putnbr(-2147483648);
  return (0);
}
