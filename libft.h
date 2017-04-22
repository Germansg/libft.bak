/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 12:53:41 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:53:55 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list *ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void	*ft_memset(void *str, int c, size_t len);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	*ft_memset(void *str, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	**ft_strsplit(char const *s, char c);
char	*ft_strnstr(const char *bit, const char *little, size_t len);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned in, char *));
char 	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

void	ft_putendl(const char *s);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char *str);
int		ft_isupper(int c);
int		ft_strsize(char *str);
char	*ft_strrev(char *str);
int		my_strlen(char *str);

#endif
