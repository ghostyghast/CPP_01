/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:38:21 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/17 02:34:28 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
using std::string;
using std::ios;
using std::cout;


void	ft_replace(string &line, string s1, string s2)
{
	size_t	pos;

	while ((pos = line.find(s1)) != string::npos)		
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
	}
}

int	main(int c, char **argv)
{
	if (c != 4)
	{
		cout << "Incorrect argument amount\n";
		return (0);
	}
	std::ifstream file;
	std::ofstream new_file;
	file.open(argv[1]);
	const string name = string(argv[1]) + ".replace";
	new_file.open(name.c_str());
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
	{
		ft_replace(str, argv[2], argv[3]);
		new_file << str;
		if (!file.eof())
			new_file << '\n';
	}
	file.close();
}