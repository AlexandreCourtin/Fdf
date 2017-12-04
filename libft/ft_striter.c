/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:01:09 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/11 22:01:56 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	char *c;

	if (s && f)
	{
		c = s;
		while (c[0])
		{
			f(c);
			c++;
		}
	}
}
