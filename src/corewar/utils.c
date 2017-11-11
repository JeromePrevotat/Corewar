/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:34:49 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/11 14:44:10 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/corewar/corewar.h"

void	error(int err_num)
{
	char	*str_error;

	ft_putstr_fd("Error :\n", 2);
	str_error = get_str_error(err_num);
	ft_putstr_fd(str_error, 2);
	exit(0);
}

int		is_cor(char *file)
{
	int	i;

	i = 0;
	while (file[i] != '\0')
		i++;
	if (i < 5)
		return (FALSE);
	if (ft_strcmp(file + i - 4, ".cor") != 0)
		return (FALSE);
	return (TRUE);
}
