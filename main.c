/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:15:51 by alilin            #+#    #+#             */
/*   Updated: 2021/02/01 14:41:47 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libasm.h"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	printf("\n\n");
	printf("### FT_STRCMP ###\n");
	int ret = strcmp("bonjour", "bonjour");
	printf("ret    strcmp : %d\n", ret);
	ret = ft_strcmp("bonjour", "bonjour");
	printf("ret ft_strcmp : %d\n", ret);
	ret = strcmp("bonj", "bonjour");
	printf("ret    strcmp : %d\n", ret);
	ret = ft_strcmp("bonj", "bonjour");
	printf("ret ft_strcmp : %d\n", ret);
	ret = strcmp("bonjour", "bonj");
	printf("ret    strcmp : %d\n", ret);
	ret = ft_strcmp("bonjour", "bonj");
	printf("ret ft_strcmp : %d\n", ret);
	ret = strcmp("bonjkur", "bonjour");
	printf("ret    strcmp : %d\n", ret);
	ret = ft_strcmp("bonjkur", "bonjour");
	printf("ret ft_strcmp : %d\n", ret);
	ret = strcmp("ok", "oki");
	printf("ret    strcmp : %d\n", ret);
	ret = ft_strcmp("ok", "oki");
	printf("ret ft_strcmp : %d\n", ret);
	ret = strcmp("xffz", "xffxfe");
	printf("ret    strcmp : %d\n", ret);
	ret = ft_strcmp("xffz", "xffxfe");
	printf("ret ft_strcmp : %d\n", ret);
	printf("_____________\n");
	char *str1;
	char *str2;
	char dest[8];
	char *src;
	src = "bonjour";
	printf("\n\n");
	printf("### FT_STRCPY ###\n");
	str1 = strdup(dest);
	str2 = strdup(dest);
	str1 = strcpy(str1, src);
	str2 = ft_strcpy(str2, src);
	printf("   strcpy: %s\n", str1);
	printf("ft_strcpy: %s\n", str2);
	printf("   strcpy: %s\n", "salut jean\n");
	printf("ft_strcpy: %s\n", "salut jean\n");
	printf("   strcpy: %s\n", "\n");
	printf("ft_strcpy: %s\n", "\n");
	printf("   strcpy: %s\n", "");
	printf("ft_strcpy: %s\n", "");
	printf("_____________\n");
	printf("\n\n");
	char *str;
	printf("### FT_STRLEN ###\n");
	str = "123456789";
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n", (int)ft_strlen(str));
	str = "";
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n", (int)ft_strlen(str));
	str = "djiasjdnlkdlkwqndk;ld3a1d32sa1d231sad13w41e32q1e32wq1e212";
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n", (int)ft_strlen(str));
	printf("_____________\n");
	printf("_____________\n");
	// char *s1;
	// char *s2;
	// char *s3;
	// char *s4;
	// char *s5;
	// printf("\n\n");
	// s1 = "bonjour";
	// s2 = "";
	// s3 = "uqwhe1233213-992138|\n";
	// printf("### FT_WRITE ###\n");
	// printf(" =    write1: %zd\n", write(1, s1, strlen(s1)));
	// printf(" = ft_write1: %zd\n", ft_write(1, s1, strlen(s1)));
	// printf(" =    write2: %zd\n", write(1, s2, strlen(s2)));
	// printf(" = ft_write2: %zd\n", ft_write(1, s2, strlen(s2)));
	// printf(" =    write3: %zd\n", write(1, s3, strlen(s3)));
	// printf(" = ft_write3: %zd\n", ft_write(1, s3, strlen(s3)));
	// printf("_____________\n");
	// printf("_____________\n");
	// char *dest2;
	// char *m_dest;
	// printf("\n\n");
	// printf("### FT_STRDUP ###\n");
	// m_dest = ft_strdup("42");
	// dest2 = strdup("42");
	// printf("   strdup: %s\n", m_dest);
	// printf("ft_strdup: %s\n", dest2);
	// printf("   strdup: %s\n", "salut thibault\n");
	// printf("ft_strdup: %s\n", "salut thibault\n");
	// printf("   strdup: %s\n", "\n");
	// printf("ft_strdup: %s\n", "\n");
	// printf("   strdup: %s\n", "");
	// printf("ft_strdup: %s\n", "");
	// free(dest2);
	// free(m_dest);
	// printf("_____________\n");
	// printf("\n\n");
	// printf("### FT_READ ###\n");
	// char	buffer[33];
	// char	buffer1[33];
	// int		r;
	// int		r1;
	// int		fd;
	// int		fd1;
	// fd = open("fichier.txt", O_RDONLY);
	// fd1 = open("fichier.txt", O_RDONLY);
	// r = read(fd, buffer, 10);
	// r1 = ft_read(fd1, buffer1, 10);
	// buffer[r] = 0;
	// buffer1[r1] = 0;
	// printf("   read,  r : %d,  buffer : %s\n", r, buffer);
	// printf("ft_read, r1 : %d, buffer1 : %s\n", r1, buffer1);
	// r = read(fd, buffer, 10);
	// r1 = ft_read(fd1, buffer1, 10);
	// buffer[r] = 0;
	// buffer1[r1] = 0;
	// printf("   read,  r : %d,  buffer : %s\n", r, buffer);
	// printf("ft_read, r1 : %d, buffer1 : %s\n", r1, buffer1);
	// r = read(fd, buffer, 10);
	// r1 = ft_read(fd1, buffer1, 10);
	// buffer[r] = 0;
	// buffer1[r1] = 0;
	// printf("   read,  r : %d,  buffer : %s\n", r, buffer);
	// printf("ft_read, r1 : %d, buffer1 : %s\n", r1, buffer1);
	// r = read(fd, buffer, 10);
	// r1 = ft_read(fd1, buffer1, 10);
	// buffer[r] = 0;
	// buffer1[r1] = 0;
	// printf("   read,  r : %d,  buffer : %s\n", r, buffer);
	// printf("ft_read, r1 : %d, buffer1 : %s\n", r1, buffer1);
	// close(fd);
	// close(fd1);
	// printf("_____________\n");
	return (0);
}
