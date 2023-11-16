/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:38:21 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/16 22:11:48 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void	replace(string line, string s1, string s2, std::ofstream &new_file)
{
	
}

int	main(int c, char **argv)
{
	(void)c;
	if (c != 4)
	{
		cout << "Incorrect argument amount\n";
		return (0);
	}
	std::ifstream file;
	std::ofstream new_file;
	file.open(argv[1]);
	new_file.open(string(argv[1]) + ".replace");
	if (!file.is_open())
	{
		cout << "File given does not exist\n";
		return (0);
	}
	if (!new_file.is_open())
	{
		cout << "Error creating file\n";
		return (0);
	}
	string str;
	while (getline(file, str))
		replace(str, argv[2], argv[3], new_file);
	file.close();
}