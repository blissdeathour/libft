/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_io.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 20:04:42 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:06 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IO_H

# define LIBFT_IO_H

# ifndef EOF
#  define EOF -1
# endif

/*
** The ft_putchar_fd() function writes the character c (converted to an
** ``unsigned char'') to the file descriptor fd.
*/
int				ft_putchar_fd(char c, int fd);
/*
** The ft_putchar() function is identical to ft_putchar_fd() with a file
** descriptor STDOUT_FILENO.
*/
int				ft_putchar(char c);
/*
** Outputs the string str to the file descriptor fd.
*/
int				ft_putstr_fd(char const *str, int fd);
/*
** The ft_putstr() function is identical to ft_putsrt_fd() with a file
** descriptor STDOUT_FILENO
*/
int				ft_putstr(char const *str);
/*
** Outputs the string str followed by a '\n' to the file descriptor fd.
*/
int				ft_putendl_fd(char const *str, int fd);
/*
** The ft_putendl() function is identical to ft_putendl_fd() with a file
** descriptor STDOUT_FILENO
*/
int				ft_putendl(char const *s);
/*
** Outputs the integer n to the file descriptor fd.
*/
int				ft_putnbr_fd(int n, int fd);
/*
** The ft_putnbr() function is identical to ft_putnbr_fd() with a file
** descriptor STDOUT_FILENO
*/
int				ft_putnbr(int n);

#endif
