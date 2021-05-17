/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonig <lkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 16:23:32 by lkonig            #+#    #+#             */
/*   Updated: 2021/05/13 16:23:34 by lkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include "minishell.h"

typedef enum	e_err
{
	ERRNO_TO_STR = -1,
	UKN_ERR,
	RD_ERR,
	CMD_ERR,
	PWD_ERR,
	CD_ERR,
	MEM_ERR,
	FRK_ERR,
	SHL_ERR,
	EXEC_ERR,
	PATH_ERR
}				t_err;

typedef struct	s_error
{
	t_err	u_id;
	char	*msg;
}				t_error;

void			error(t_err raised);
void			export_print_error(char *err);
void			print_error(char *cmd, t_err raised);

#endif
