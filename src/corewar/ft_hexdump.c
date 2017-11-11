/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 15:12:25 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/11 15:29:44 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/corewar/corewar.h"

int	ft_hexdump(void *mem, size_t size, int bpl)
{
	unsigned char	*tmp;
	int				printed;
	size_t			i;

	tmp = (unsigned char *)mem;
	printed = 0;
	i = 0;
	while (i < size)
	{
		if (printed % 2 == 0)
			ft_printf(" ");
		if (i % bpl == 0)
			ft_printf("\n");
		printed += ft_printf("%.2X", *(tmp + i));
		i++;
	}
	return (printed);
}
