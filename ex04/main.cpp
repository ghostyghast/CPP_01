/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:38:21 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/15 20:18:21 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

// std::fstream	new_file(std::fstream file)
// {
	
// }

int	main(int c, char **argv)
{
	(void)c;
	// if (c != 4)
	// {
	// 	cout << "Inccorect argument amount\n";
	// 	return (0);
	// }
	std::fstream file;
	file.open(argv[1], ios::in);
	if (!file)
	{
		cout << "File given does not exist\n";
		return (0);
	}
	string s;
	while (file >> s)
		cout << s << '\n';
	
}