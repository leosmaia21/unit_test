/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledos-sa <ledos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:01:41 by ledos-sa          #+#    #+#             */
/*   Updated: 2022/11/27 18:50:00 by ledos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

static int	g_test_failed = 0;
static int	g_test_passed = 0;
static int	g_total_tests = 0;

void	unit_test_equal_int(int expected, int received)
{
	g_total_tests++;
	if (expected == received)
	{
		g_test_passed++;
		printf("Test%d: OK✅\n", g_total_tests);
	}
	else
	{
		g_test_failed++;
		printf("Test%d: Failed❌, expected: %d received: %d\n", \
				g_total_tests, expected, received);
	}
}

void	unit_test_equal_float(float expected, float received)
{
	g_total_tests++;
	if (expected == received)
	{
		g_test_passed++;
		printf("Test%d: OK✅\n", g_total_tests);
	}
	else
	{
		g_test_failed++;
		printf("Test%d: Failed❌, expected: %g received: %g\n", \
				g_total_tests, expected, received);
	}
}

void	unit_test_not_equal_int(int expected, int received)
{
	g_total_tests++;
	if (expected != received)
	{
		g_test_passed++;
		printf("Test%d: OK✅\n", g_total_tests);
	}
	else
	{
		g_test_failed++;
		printf("Test%d: Failed❌, got equal numbers: %d\n", \
				g_total_tests, expected);
	}
}

void	unit_test_not_equal_float(float expected, float received)
{
	g_total_tests++;
	if (expected != received)
	{
		g_test_passed++;
		printf("Test%d: OK✅\n", g_total_tests);
	}
	else
	{
		g_test_failed++;
		printf("Test%d:dFailed❌, got equal numbers: %g\n", \
				g_total_tests, expected);
	}
}

void	unit_test_equal_string(char *expected, char *received)
{
	g_total_tests++;
	if (!strcmp(expected, received))
	{
		g_test_passed++;
		printf("Test%d: OK✅\n", g_total_tests);
	}
	else
	{
		g_test_failed++;
		printf("Test%d: Failed❌, expected: '%s' received: '%s'\n", \
				g_total_tests, expected, received);
	}
}

void	run_test(void (*f)(void))
{
	printf("Starting tests...\n");
	f();
	if (g_total_tests == g_test_passed)
		printf("\nAll %d tests passed💯\n", g_total_tests);
	else
		printf("\nTotal tests:%d, successful tests:%d, failed testes:%d\n", \
				g_total_tests, g_test_passed, g_test_failed);
}
