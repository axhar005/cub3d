/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:15:09 by olivierbouc       #+#    #+#             */
/*   Updated: 2023/10/02 16:26:39 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/error.h"

void	ft_exit(char *str)
{
	if (str)
		ft_printf("%s\n", str);
	exit(EXIT_FAILURE);
}
