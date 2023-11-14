/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:36:02 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 18:41:14 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
using std::cout;
using std::string;

int Zombie::_hordeNumber = 0;

Zombie::Zombie()
{
	_hordeNumber++;
	_zombieIndex = _hordeNumber;
}

Zombie::Zombie(string name) : _name(name)
{
}

Zombie::~Zombie(void)
{
	cout << _name << ' '
		 <<_zombieIndex << '\n';
}

void	Zombie::set_name(string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	cout << _name << ':'
		 << " BraiiiiiiinnnzzzZ... "
		 << _zombieIndex << '\n';
}