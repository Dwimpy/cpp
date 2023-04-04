/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:57:50 by arobu             #+#    #+#             */
/*   Updated: 2023/04/03 23:54:37 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	std::string str;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		str += argv[++i];
		while (++i < argc)
			str += (std::string)" " + argv[i];
		std::transform(str.begin(), str.end(), str.begin(), toupper);
		std::cout<< str << std::endl;
	}
	return (0);
}
