/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:02:56 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/15 15:02:59 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_str_is_printable(char *str)
{
  int i = 0;

  while (str[i] != '\0')
  {
    if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
    {
      return 0;
    }
    i++;
  }

  return 1;
}

