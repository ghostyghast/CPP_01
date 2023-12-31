/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:11:44 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/15 19:09:03 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
using std::string;

Weapon::Weapon(string type)
{
	_type = type;
}

Weapon::~Weapon()
{
}

const string	&Weapon::getType(void)
{
	return(_type);
}

void	Weapon::setType(string new_type)
{
	_type = new_type;
}