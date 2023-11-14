/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:34:57 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 17:53:50 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	//Allocating things on stack don't allow you to use the data outside
	//of the function scope, as when the function is finished, the data
	//exists only for the duration of the function //
	Zombie	stack_zombie("Stack_Zombie");
	//Allocating it on heap thus allows the data to exist for the entire
	//runtime of the program, until it is freed //
	Zombie	*heap_zombie = newZombie("Heap_Zombie");

	randomChump("Chump");
	delete heap_zombie;
}