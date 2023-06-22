/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:26:36 by arobu             #+#    #+#             */
/*   Updated: 2023/06/22 14:57:34 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Account account = Account(10);
	account.makeDeposit(25);
	account.makeWithdrawal(200);
	account.makeWithdrawal(10);
	account.displayStatus();
}
