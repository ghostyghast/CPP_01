/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:39:11 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/15 19:07:54 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
using std::string;
using std::cout;

HumanA::HumanA(string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}

void	HumanA::attack(void)
{
	cout << _name << " attacks with their " \
		 << _weapon.getType() << '\n';
}