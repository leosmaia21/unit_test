/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledos-sa <ledos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:06:26 by ledos-sa          #+#    #+#             */
/*   Updated: 2022/11/27 18:52:13 by ledos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_TEST_H
# define UNIT_TEST_H

# include <stdio.h>
# include <string.h>

void	unit_test_equal_int(int expected, int received);
void	unit_test_equal_float(float expected, float received);
void	unit_test_not_equal_int(int expected, int received);
void	unit_test_not_equal_float(float expected, float received);
void	unit_test_equal_string(char *expected, char *received);
void	run_test(void (*f)(void));
#endif 
