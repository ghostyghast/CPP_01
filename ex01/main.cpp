/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:57:39 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 18:35:13 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
using std::cout;
using std::cin;
using std::string;

int	main()
{
	Zombie	*horde;
	string	input;
	string	name;
	int		N;

	cout << "Enter a number bigger than 0\n"
		 << ">> ";
	cin >> input;
	
	while (atoi(input.c_str()) <= 0)
	{
		cout << "Number is equal or less than 0, try again\n"
			 << ">>";
		cin >> input;
	}
	cout << "Name your horde\n"
		 << ">> ";
	cin >> name;
	
	N = atoi(input.c_str());
	horde = zombieHorde(N, name);
	for(int i = 0; i < N; i++)
		horde[i].announce();
	
	delete[] horde;
}