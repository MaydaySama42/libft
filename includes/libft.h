/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalil <mdalil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:04:25 by mdalil            #+#    #+#             */
/*   Updated: 2018/08/18 18:39:52 by mdalil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include "ft_printfast.h"
# include "get_next_line.h"

int					ft_atoi(const char *str);
int					ft_atoi_free(char *str);
void				ft_bzero(void *s, size_t n);
void				ft_char_swap(char *a, char *b);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char		        *ft_itoa(int n);
char				*ft_l_b(long long n, int base);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				ft_putchar_fd(char c, int fd);
int				    ft_putchar(int c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putstr(char const *s);
int					ft_recursive_power(int nb, int power);
int					ft_str_isdigit(char *str);
int					ft_str_isempty(char *str);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *str);
int					ft_strequ(char const *s1, char const *s2);
char		        *ft_strjoin_free(char *s1, char *s2);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlen(const char *str);
char				*ft_strncat(char *dest, const char *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char	            *ft_strndup(const char *s, int n, int for_free);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *str, const char *find, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strrev(char *str);
char				**ft_strsplit(char *s, char *c);
int		            ft_strstart(char *start, char *str);
char				*ft_strstr(const char *str, const char *find);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(const char *s);
char				*ft_strup(char *str);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_u_b(unsigned long long n, int base);
int					get_next_line(int fd, char **line);

#endif
