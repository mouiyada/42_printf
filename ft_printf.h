/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:42:50 by kyamada           #+#    #+#             */
/*   Updated: 2025/02/02 14:29:25 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

size_t			ft_strlen(const char *str);
int				ft_putstr(char *str);
int				ft_putnbr(int n);
int				ft_putuns(unsigned long n);
int				ft_putchar(char c);
int				ft_puthex1(unsigned int n);
int				ft_puthex2(unsigned int n);
int				ft_puthex3(long long unsigned int n);
int				ft_putptr(void *arg);
char			ft_strsearch(const char c, const char *little);
int				ft_checktype(int c, va_list args);
int				ft_printf(const char *format, ...);

#endif