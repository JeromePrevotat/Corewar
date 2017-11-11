/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:46:54 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/11 14:47:17 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/corewar/corewar.h"

char	*get_str_error(int err_num)
{
	if (err_num == -2)
		return ("Malloc error.\n");
	if (err_num == -1)
		return ("Unknow error.\n");
	if (err_num == 0)
		return ("Too few arguments.\n");
	if (err_num == 1)
		return ("Incorrect nbr_cycle.\n");
	if (err_num == 3)
		return ("Wrong champion arguments. Usage : [[-n number] champ_file.cor]\n");
	if (err_num == 4)
		return ("Wrong champion Syntax/Number/File. Usage : [[-n number] champ_file.cor]\n");
	return ("Unknow error.\n");
}
