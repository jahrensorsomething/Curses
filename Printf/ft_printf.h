/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:27:32 by jahrens           #+#    #+#             */
/*   Updated: 2022/06/27 15:31:04 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *s, ...);
void	ft_p(size_t p, int *len);
void	ft_u(unsigned int u, int *len);
void	ft_xx(unsigned int x, int *len, char x_or_x);
void	ft_nbr(int n, int *len);
void	ft_putchar_len(char c, int *len);
void	ft_str(char *args, int *len);

#endif
