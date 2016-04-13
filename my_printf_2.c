/*
** calc2.c for calc2 in /home/chambo_c/Rendu/PSU_2015_my_printf_bootstrap
**
** Made by Arthur Chambost
** Login   <chambo_c@epitech.net>
**
** Started on  Mon Nov  9 14:42:41 2015 Arthur Chambost
** Last update Mon Nov 16 15:51:13 2015 Arthur Chambost
*/

#include <stdarg.h>

int		binary(va_list print)
{
  my_put_nbr_base(va_arg(print, int), "01");
}

int	printer(va_list print)
{
}
