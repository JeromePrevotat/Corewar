/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corewar.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:40:38 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/11 14:53:57 by jprevota         ###   ########.fr       */
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
# define CYCLE_TO_DIE 1536
# define CYCLE_DELTA 4
# define NBR_LIVE 2048

/*
** Main.c
*/

/*
** Check_arg.c
*/
void	check_vm_arg(int argc, char **argv);
void	check_champ_arg(int argc, char **argv);
void	check_champ_split(char **split);

/*
** Utils.c
*/
void	error(int err_num);
int		is_cor(char *file);

/*
** Ft_str_isdigit.c
*/
int		ft_str_isdigit(char *str);

/*
** Free_ressources.c
*/
void	free_split(char **split);

/*
** Error_handler.c
*/
char	*get_str_error(int err_num);

#endif
