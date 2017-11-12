/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:00:57 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/12 16:10:24 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/asm/asm.h"

void error(int err_num)
{
	char	*str;

	str = get_str_error(err_num);
	ft_putstr_fd("Error : ", 2);
	ft_putstr_fd(str, 2);
	exit(0);
}
