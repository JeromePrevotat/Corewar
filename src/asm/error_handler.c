/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:02:57 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/14 16:57:43 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/asm/asm.h"

char	*get_str_error(int err_num)
{
	if (err_num == -2)
		return ("Malloc error.\n");
	if (err_num == -1)
		return ("Unknow error.\n");
	if (err_num == 0)
		return ("Wrong arguments number.\n");
	if (err_num == 1)
		return ("Argument is not an .s file.\n");
	if (err_num == 2)
		return ("Cannot open file.\n");
	if (err_num == 3)
		return ("Cannot close file.\n");
	if (err_num == 4)
		return ("Bytecode produced is NULL.\n");
	if (err_num == 5)
		return ("Error at the creation of .cor file.\n");
	if (err_num == 6)
		return ("Writing error in .cor file.\n");
	if (err_num == 7)
		return ("Incorrect asm instruction.\n");
	return ("Unknow error.\n");
}
