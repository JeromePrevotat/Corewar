/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:46:54 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/08 19:52:04 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/corewar/corewar.h"

int	check_reg_attributes(void)
{
	if (REG_SIZE < 1)
		return (ERROR);
	if (REG_NUMBER < 1)
		return (ERROR);
	return (1);
}
