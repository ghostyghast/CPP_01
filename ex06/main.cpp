/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 03:13:57 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/17 19:28:16 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
using   std::cout;
using   std::string;

int main(int c, char **argv)
{
    Harl harl;

    if (c != 2)
    {
        cout << "Invalid arg amount\n";
        return (0);        
    }
    harl.complain(argv[1]);
}