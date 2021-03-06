/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:01:35 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/15 15:01:38 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
  int i = 0;

  while (str[i] != '\0')
  {
    if (!(str[i] >= '0' && str[i] <= '9'))
    {
      return 0;
    }
    i++;
  }

  return 1;
}
