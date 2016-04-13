/*
** calc.c for calc in /home/chambo_c/Rendu/PSU_2015_my_printf_bootstrap
**
** Made by Arthur Chambost
** Login   <chambo_c@epitech.net>
**
** Started on  Mon Nov  9 12:07:22 2015 Arthur Chambost
** Last update Mon Nov 16 15:51:04 2015 Arthur Chambost
*/

#include <stdarg.h>

int	hex(va_list print)
{
  my_put_nbr_base(va_arg(print, int), "0123456789ABCDEF");
}

int	carac(va_list print)
{
  my_putchar(va_arg(print, char *));
}

int	octal(va_list print)
{
  my_put_nbr_base(va_arg(print, int), "01234567");
}

int	pointeur(va_list print)
{
  my_putstr("Les pointeurs fonctionnent");
  my_putchar('\n');
}

int	count(va_list print, int count_n)
{
  my_put_nbr(count_n);
}
