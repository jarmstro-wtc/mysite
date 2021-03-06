/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:24:27 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/16 10:24:32 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	while(*s1 != '\0' && *s2 != '\0'  && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return 0;
	}
	else if (*s1 > *s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
