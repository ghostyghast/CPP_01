/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 02:37:13 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/17 03:10:28 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    harl;
    std::string  input;

    harl.complain("debug");
    harl.complain("info");
    std::cout << "let harl have more bacon?\n" << "yes or no?\n" 
              <<">> ";
    getline(std::cin, input);
    if (input == "yes")
    {
        std::cout << "wow how nice of you :)\n";
        return (0);
    }
    else if (input == "no")
        harl.complain("warning");
    std::cout << "Reconsider?....\n" << "Yes or no?\n"
              << ">> ";
    getline(std::cin, input);
    if (input == "yes")
    {
       std::cout << "wow how nice of you :)\n";
       return (0);
    }
    else if (input == "no")
        harl.complain("error");
}