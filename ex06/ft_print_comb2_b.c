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

int main()
{
    ft_print_comb2_b();
    return (0);
}
