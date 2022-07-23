/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 20:47:28 by tpoungla          #+#    #+#             */
/*   Updated: 2022/07/23 08:49:08 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

int		ft_atoi(const char *str);
int		check_space(const char *c, int i);
int		get_num(const char *str, int i);
int		ft_isalnum(int argument);
int		ft_isalpha(int argument);
int		ft_isascii(int argument);
int		ft_isdigit(int arg);
int		ft_isprint(int arg);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int c);
char	ft_tolower(int c);
char	ft_toupper(int c);

#endif
