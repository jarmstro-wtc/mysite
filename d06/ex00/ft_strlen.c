/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:23:11 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/16 10:23:19 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int strlen = 0;

	while (str[strlen] != '\0')
	{
		strlen++;
	}

	return strlen;
}
