/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <islomvalievabudabi@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:31:51 by ivaliev           #+#    #+#             */
/*   Updated: 2022/03/22 16:12:43 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str)
		write(1, str++, 1);
}
/*#include <unistd.h>
int	main(void)
{
	char	*str;
	str	= "hello world";
	ft_putstr(str);
}*/
