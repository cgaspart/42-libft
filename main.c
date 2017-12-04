/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaspart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:35:36 by cgaspart          #+#    #+#             */
/*   Updated: 2017/11/21 09:20:52 by cgaspart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char	temp[150];
	char	tempn[150];
	char	tempstrcat[150];
	char	tempstrncat[150];
	char	tempftstrncat[150];

	ft_strcpy(tempstrcat, "Je suis la destination");
	ft_strcpy(tempstrncat, "Je suis la destination");
	ft_strcpy(tempftstrncat, "Je suis la destination");

	// Test putchar et putstr
	ft_putstr("ft_putchar = OK\nft_putchar = OK\n");

	// Test strlen
	if (ft_strlen("abc123!@") == 8)
		ft_putstr("ft_strlen = OK\n");
	else
		ft_putstr("ft_strlen = KO\n");

	// Test putnbr
	ft_putnbr(2893);
	ft_putchar('\n');
	ft_putnbr(-968432);
	ft_putchar('\n');

	// Test isalpha
	if ((ft_isalpha('d') == 1) && (ft_isalpha('C') == 1) && (ft_isalpha('2') == 0)&& (ft_isalpha('\t') == 0))
		ft_putstr("ft_isalpha = OK\n");
	else
		ft_putstr("ft_isalpha = KO\n");

	// Test isdigit
	if (ft_isdigit('8') == 1 && ft_isdigit('d') == 0)
		ft_putstr("ft_isdigit = OK\n");
	else
		ft_putstr("ft_isdigit = KO\n");

	// Test isalnum
	if (ft_isalnum('a') == 1 && ft_isalnum('4') == 1 && ft_isalnum('\t') == 0)
		ft_putstr("ft_isalnum = OK\n");
	else
		ft_putstr("ft_isalnum = KO\n");

	// Test isascii
	if (ft_isascii('a') == 1 && ft_isascii('4') == 1 && ft_isascii('\t') == 1 && ft_isascii(300) == 0)
		ft_putstr("ft_isascii = OK\n");
	else
		ft_putstr("ft_isascii = KO\n");

	// Test isprint
	if (ft_isprint('a') == 1 && ft_isprint('4') == 1 && ft_isprint('\t') == 0 && ft_isprint(300) == 0 && ft_isprint(' ') == 1)
		ft_putstr("ft_isprint = OK\n");
	else
		ft_putstr("ft_isprint = KO\n");

	// Test toupper
	if (ft_toupper('p') == 'P' && ft_toupper(360) == 360)
		ft_putstr("ft_toupper = OK\n");
	else
		ft_putstr("ft_toupper = KO\n");

	// Test tolower
	if (ft_tolower('P') == 'p' && ft_tolower(360) == 360)
		ft_putstr("ft_tolower = OK\n");
	else
		ft_putstr("ft_tolower = KO\n");

	// Test strchr && strrchr
	ft_putstr("======== Official Function strchr && strrchr ========\n");
	ft_putstr(strchr("Salut la famille zamite", 'z'));
	ft_putchar('\n');
	ft_putstr(strrchr("Salut la famille zamite", 'a'));
	ft_putstr("\n======== Your Function ========\n");
	ft_putstr(ft_strchr("Salut la famille zamite", 'z'));
	ft_putchar('\n');
	ft_putstr(ft_strrchr("Salut la famille zamite", 'a'));
	ft_putchar('\n');


	// Test stcmp && strncmp
	ft_putstr("======== Official Functions strcmp && strncmp========\n");
	ft_putnbr(strcmp("aba", "aza"));
	ft_putchar('\n');
	ft_putnbr(strcmp("aza", "aba"));
	ft_putchar('\n');
	ft_putnbr(strcmp("Corentin", "Corentin"));
	ft_putchar('\n');
	ft_putnbr(strncmp("Corentingnahga", "Corentin", 8));
	ft_putchar('\n');
	ft_putstr("======== Your Functions =========\n");
	ft_putnbr(ft_strcmp("aba", "aza"));
	ft_putchar('\n');
	ft_putnbr(ft_strcmp("aza", "aba"));
	ft_putchar('\n');
	ft_putnbr(ft_strcmp("Corentin", "Corentin"));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp("Corentingnahga", "Corentin", 8));
	ft_putchar('\n');

	// Test Strcpy && strncpy
	ft_putstr("======== Official Functions strcpy && strncpy========\n");
	strcpy(temp, "Je suis une copie\n");
	ft_putstr(temp);
	strncpy(tempn, "Je suis une copie\n", 7);
	ft_putstr(tempn);
	ft_putchar('\n');
	ft_putstr("======== Your Functions ======== \n");
	ft_strcpy(temp, "J'ai pris la place de la copie, mais je suis une copie\n");
	ft_putstr(temp);
	ft_strncpy(tempn, "J'ai pris la place de la copie, mais je suis une copie\n", 10);
	ft_putstr(tempn);
	ft_putchar('\n');

	// Test Strcat && strncat
	ft_putstr("======== Official Functions strcat && strncat ========\n");
	strcat(tempstrcat, "| et moi la source");
	ft_putstr(tempstrcat);
	ft_putchar('\n');
	strncat(tempstrncat, "First part and second part", 11);
	ft_putstr(tempstrncat);
	ft_putchar('\n');
	ft_putstr("======== Your Functions ========\n");
	ft_strcat(tempstrcat, "| Et moi une nouvelle source");
	ft_putstr(tempstrcat);
	ft_putchar('\n');
	ft_strncat(tempftstrncat, "First part and second part", 11);
	ft_putstr(tempftstrncat);
	ft_putchar('\n');

	// Test strdup
	ft_putstr("======== Official Function strdup ========\n");
	ft_putstr(strdup("Ceci est un test\n"));
	ft_putstr("======== Your Function ========\n");
	ft_putstr(ft_strdup("Ceci est un test\n"));

	// test atoi
	ft_putstr("======== Official Function atoi ========\n");
	ft_putnbr(atoi("2536"));
	ft_putchar('\n');
	ft_putnbr(atoi("-8653"));
	ft_putchar('\n');
	ft_putnbr(atoi("	 +350"));
	ft_putchar('\n');
	ft_putnbr(atoi("ads250"));
	ft_putchar('\n');
	ft_putnbr(atoi("888 dsafw"));
	ft_putchar('\n');
	ft_putstr("======== Your Function ========\n");
	ft_putnbr(ft_atoi("2536"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-8653"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("		 +350"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("ads250"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("888 dsafw"));
	ft_putchar('\n');

	// test strstr
	ft_putstr("======== Official Function strstr ========\n");
	ft_putstr(strstr("OOOOOooooo ATTENTION OK kjueqwef", "OK"));
	ft_putstr("\n======== You Function ========\n");
	ft_putstr(ft_strstr("OOOOOooooo ATTENTION OK kjueqwef", "OK"));
	ft_putchar('\n');

	// test ft_strsplit
	char	**shnazle;
	int		i;

	i = 0;
	shnazle = ft_strsplit("*salut*les***etudiants*", '*');
	while (shnazle[i] != 0)
	{
		ft_putstr(shnazle[i]);
		i++;
	}
	ft_putchar('\n');

	ft_putstr(ft_itoa(-3689));
}
