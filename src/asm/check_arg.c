/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:59:50 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/12 16:18:08 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/asm/asm.h"

void	check_arg(int argc, char **argv)
{
	if (argc != 2)
		error(0);
	if (is_asm(argv[1]) == FALSE)
		error(1);
}

int		is_asm(char *file_name)
{
	int	i;

	i = 0;
	while (file_name[i] != '\0')
		i++;
	if (i < 3)
		return (FALSE);
	if (ft_strcmp(file_name + i - 2, ".s") != 0)
		return (FALSE);
	return (TRUE);
}
