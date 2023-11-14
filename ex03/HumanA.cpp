/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:39:11 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 19:54:52 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
using std::string;

HumanA::HumanA(string name, Weapon &weapon)
{
	_name = name;
	_weapon = weapon;	
}

HumanA::~HumanA(void)
{
}

Weapon	HumanA::getWeapon(void)
{
	
}