/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corewar.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:40:38 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/08 19:21:32 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COREWAR_H
# define COREWAR_H

# include "../../libft/libft.h"
# include <stdio.h>

# define TRUE 1
# define FALSE 0
# define ERROR -1

# define REG_SIZE 32
# define REG_NUMBER 32

/*
** Main.c
*/
int		init_vm(unsigned char **vm_mem);

/*
** Utils.c
*/
int		ft_hexdump(void *mem, int printed);
void	print_vm_mem(unsigned char **vm_mem);
void	error(void);

/*
** Free_ressources.c
*/
void	free_vm_mem(unsigned char **vm_mem);

#endif
