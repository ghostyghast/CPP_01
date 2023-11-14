/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:26:58 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 19:42:52 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon {
	private :
		std::string _type;

	public :
							Weapon(std::string type);
							~Weapon(void);
		const std::string	&getType(void);
		void				setType(std::string new_type);
		
};