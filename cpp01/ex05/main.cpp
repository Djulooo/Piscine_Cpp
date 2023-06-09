/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:34:49 by jlaisne           #+#    #+#             */
/*   Updated: 2023/06/27 14:03:23 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){

    Harl        Harl;
    std::string level;

    Harl.complain("ERROR");
    Harl.complain("DEBUG");
    Harl.complain("WARNING");
    Harl.complain("INFO");
    Harl.complain("INFOS");
    Harl.complain("EWRERWE");
    Harl.complain("");

    std::cout << "Enter a complaint level: ";
    std::cin >> level;
    Harl.complain(level);
    return 0;
}