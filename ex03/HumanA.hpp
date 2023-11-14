/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:17:41 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 19:55:40 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {
	private :
		std::string	_name;
		Weapon		&_weapon;
	
	public :
				HumanA(std::string name, Weapon &weapon);
				~HumanA();
		
		Weapon	getWeapon(void);
		void	setWeapon(Weapon weapon);
		void	attack(void);
		
	
};