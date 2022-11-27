/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledos-sa <ledos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:06:26 by ledos-sa          #+#    #+#             */
/*   Updated: 2022/11/27 18:07:48 by ledos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_H
# define UNIT_H

# include <stdio.h>
# include <string.h>

void	unit_test_int(int expected, int received);
void	unit_test_float(float expected, float received);
void	unit_test_string(char *expected, char *received);
void	run_test(void (*f)(void));
#endif 
