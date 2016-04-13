/*
** struct.c for struct in /home/chambo_c/Rendu/PSU_2015_my_printf_bootstrap
**
** Made by Arthur Chambost
** Login   <chambo_c@epitech.net>
**
** Started on  Mon Nov  9 11:31:47 2015 Arthur Chambost
** Last update Wed Apr 13 14:05:52 2016 Arthur Chambost
*/

#include <stdlib.h>
#include <stdarg.h>

int		my_printf(char *str, ...)
{
  int		a;
  int		arg;
  va_list	print;
  int		count_n;

  a = 0;
  arg = 0;
  va_start(print, str);
  count_n = 0;
  while (str[a] != '\0')
    {
      if (str[a] == '%')
	{
	  a++;
	  while (str[a] == '%')
	    a++;
	  arg = str[a];
	  redirect(arg, print, count_n);
	}
      if (str[a - 1] != '%')
	{
	  my_putchar(str[a]);
	  count_n++;
	}
      a++;
    }
  va_end(print);
}

int		redirect(int arg, va_list print, int count_n)
{
  if (arg == 'd' || arg == 'i')
    decimal(print);
  if (arg == 'x' || arg == 'X')
    hex(print);
  if (arg == 'o')
    octal(print);
  if (arg == 'u')
    integ(print);
  if (arg == 'c')
    carac(print);
  if (arg == 's')
    string(print);
  if (arg == 'p')
    pointeur(print);
  if (arg == 'n')
    count(print, count_n);
  if (arg == 'b')
    binary(print);
  if (arg == 'S')
    printer(print);
}

int		decimal(va_list print)
{
  my_put_nbr(va_arg(print, int));
}

int		string(va_list print)
{
  my_putstr(va_arg(print, char *));
}

int		integ(va_list print)
{
  my_put_un(va_arg(print, unsigned int));
}

int	main()
{
  my_printf("Elle avait %d %s\n", 2, "jolies atouts");
}
