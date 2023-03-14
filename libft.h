/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:07:21 by dbui              #+#    #+#             */
/*   Updated: 2023/03/14 20:18:57 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
// memset
// bzero
// memcpy
// memmove
// strlcpy
// strlcat
int		ft_toupper(int c);
int		ft_toupper(int c);
// strrchr
// strncmp
// memchr
// memcmp
// strnstr
// atoi
#endif
