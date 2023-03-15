/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarin-l <amarin-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:16:19 by amarin-l          #+#    #+#             */
/*   Updated: 2023/02/16 21:16:28 by amarin-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
