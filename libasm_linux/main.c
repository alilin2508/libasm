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
	ret = strcmp("a", "a");
	printf("ret    strcmp : %d\n", ret);
	ret = ft_strcmp("a", "a");
	printf("ret ft_strcmp : %d\n", ret);
	ret = strcmp("42", "42");
	printf("ret    strcmp : %d\n", ret);
	ret = ft_strcmp("42", "42");
	printf("ret ft_strcmp : %d\n", ret);
	ret = strcmp("42", "422");
	printf("ret    strcmp : %d\n", ret);
	ret = ft_strcmp("42", "422");
	printf("ret ft_strcmp : %d\n", ret);
	ret = strcmp("", "");
	printf("ret    strcmp : %d\n", ret);
	ret = ft_strcmp("", "");
	printf("ret ft_strcmp : %d\n", ret);

	printf("\n_____________\n");

	printf("\n");
	printf("### FT_STRCPY ###\n");
	char *str1;
	char *str2;
	str1 = malloc(sizeof(char) * strlen("bonjour") + 1);
	str2 = malloc(sizeof(char) * strlen("bonjour") + 1);
	printf("   strcpy: %s\n", strcpy(str1, "bonjour"));
	printf("ft_strcpy: %s\n", ft_strcpy(str2, "bonjour"));
	free(str1);
	free(str2);
	str1 = malloc(sizeof(char) * strlen("bonjour, Jean") + 1);
	str2 = malloc(sizeof(char) * strlen("bonjour, Jean") + 1);
	printf("   strcpy: %s\n", strcpy(str1, "bonjour, Jean"));
	printf("ft_strcpy: %s\n", ft_strcpy(str2, "bonjour, Jean"));
	free(str1);
	free(str2);
	str1 = malloc(sizeof(char) * strlen("a") + 1);
	str2 = malloc(sizeof(char) * strlen("a") + 1);
	printf("   strcpy: %s\n", strcpy(str1, "a"));
	printf("ft_strcpy: %s\n", ft_strcpy(str2, "a"));
	free(str1);
	free(str2);
	str1 = malloc(sizeof(char) * strlen("\n") + 1);
	str2 = malloc(sizeof(char) * strlen("\n") + 1);
	printf("   strcpy: %s\n", strcpy(str1, "\n"));
	printf("ft_strcpy: %s\n", ft_strcpy(str2, "\n"));
	free(str1);
	free(str2);
	str1 = malloc(sizeof(char) * strlen("") + 1);
	str2 = malloc(sizeof(char) * strlen("") + 1);
	printf("   strcpy: %s\n", strcpy(str1, ""));
	printf("ft_strcpy: %s\n", ft_strcpy(str2, ""));
	free(str1);
	free(str2);

	printf("\n_____________\n");

	printf("\n");
	printf("### FT_STRLEN ###\n");
	char *str;
	str = strdup("123456789");
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n", (int)ft_strlen(str));
	free(str);
	str = strdup("");
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n", (int)ft_strlen(str));
	free(str);
	str = strdup("djiasjdnlkdlkwqndk;ld3a1d32sa1d231sad13w41e32q1e32wq1e212");
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n", (int)ft_strlen(str));
	free(str);
	str = strdup("abcd");
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n", (int)ft_strlen(str));
	free(str);

	printf("\n_____________\n");

	printf("\n");
	printf("### FT_WRITE ###\n");
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	s1 = strdup("bonjour");
	s2 = strdup("");
	s3 = strdup("\n");
	s4 = strdup("abcdefghijklmnopqrstuvwxyz1234567890");
	printf(" =    write1: %zd\n", write(1, s1, strlen(s1)));
	printf(" = ft_write1: %d\n", ft_write(1, s1, strlen(s1)));
	free(s1);
	printf(" =    write2: %zd\n", write(1, s2, strlen(s2)));
	printf(" = ft_write2: %d\n", ft_write(1, s2, strlen(s2)));
	free(s2);
	printf(" =    write3: %zd\n", write(1, s3, strlen(s3)));
	printf(" = ft_write3: %d\n", ft_write(1, s3, strlen(s3)));
	free(s3);
	printf(" =    write4: %zd\n", write(1, s4, strlen(s4)));
	printf(" = ft_write4: %d\n", ft_write(1, s4, strlen(s4)));
	free(s4);

	printf("\n_____________\n");

	printf("\n");
	printf("### FT_STRDUP ###\n");

	str1 = strdup("42");
	str2 = ft_strdup("42");
	printf("   strdup: %s\n", str1);
	printf("ft_strdup: %s\n", str2);
	free(str1);
	free(str2);
	str1 = strdup("bonjour, Jean");
	str2 = ft_strdup("bonjour, Jean");
	printf("   strdup: %s\n", str1);
	printf("ft_strdup: %s\n", str2);
	free(str1);
	free(str2);
	str1 = strdup("abcdefghijklmnopqrstuvwxyz1234567890");
	str2 = ft_strdup("abcdefghijklmnopqrstuvwxyz1234567890");
	printf("   strdup: %s\n", str1);
	printf("ft_strdup: %s\n", str2);
	free(str1);
	free(str2);
	str1 = strdup("\n");
	str2 = ft_strdup("\n");
	printf("   strdup: %s\n", str1);
	printf("ft_strdup: %s\n", str2);
	free(str1);
	free(str2);
	str1 = strdup("");
	str2 = ft_strdup("");
	printf("   strdup: %s\n", str1);
	printf("ft_strdup: %s\n", str2);
	free(str1);
	free(str2);

	printf("\n_____________\n");

	printf("\n");
	printf("### FT_READ ###\n");
	char	buffer[50];
	char	buffer1[50];
	int 	r;
	int 	r1;
	int		fd;
	int		fd1;
	fd = open("fichier.txt", O_RDONLY);
	fd1 = open("fichier.txt", O_RDONLY);
	r = read(fd, buffer, 10);
	r1 = ft_read(fd1, buffer1, 10);
	buffer[r] = '\0';
	buffer1[r1] = '\0';
	printf("   read,  r : %zd,  buffer : %s\n", read(fd, buffer, 10), buffer);
	printf("ft_read, r1 : %d, buffer1 : %s\n", ft_read(fd1, buffer1, 10), buffer1);
	r = read(fd, buffer, 20);
	r1 = ft_read(fd1, buffer1, 20);
	buffer[r] = '\0';
	buffer1[r1] = '\0';
	printf("   read,  r : %zd,  buffer : %s\n", read(fd, buffer, 20), buffer);
	printf("ft_read, r1 : %d, buffer1 : %s\n", ft_read(fd1, buffer1, 20), buffer1);
	r = read(fd, buffer, 30);
	r1 = ft_read(fd1, buffer1, 30);
	buffer[r] = '\0';
	buffer1[r1] = '\0';
	printf("   read,  r : %zd,  buffer : %s\n", read(fd, buffer, 30), buffer);
	printf("ft_read, r1 : %d, buffer1 : %s\n", ft_read(fd1, buffer1, 30), buffer1);
	close(fd);
	close(fd1);

	return (0);
}
