/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:21:58 by agalall           #+#    #+#             */
/*   Updated: 2022/02/03 13:48:03 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

int		ft_printf(const char *ft, ...);
void	ft_putchar_len(char c, int *len);
void	ft_str(char *arg, int *len);
void	ft_ptr(size_t arg, int *len);
void	ft_nmbr(int arg, int *len);
void	ft_u(unsigned int arg, int *len);
void	ft_hex(unsigned int arg, int *len, char x);

#endif