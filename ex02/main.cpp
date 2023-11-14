/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:44:04 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 18:57:04 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
using std::string;
using std::cout;

int main()
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str;

	cout << &str << '\n'
		 << stringPTR << '\n'
		 << &stringREF << "\n\n";
	
	cout << str << '\n'
		 << *stringPTR << '\n'
		 << stringREF << '\n';
}