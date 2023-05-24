/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:23 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/17 13:26:50 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <iterator>
#include <string>
#include <cctype>

Harl::Harl()
{
    std::cout << "Harl" << " mavaewwww" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl" << " eaiii!!  tookleawwwww" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now. KUY!!!" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*func[25])();
    std::string inpstr = "debuginfowarningerror";

    func[0] = &Harl::debug;
    func[5] = &Harl::info;
    func[9] = &Harl::warning;
    func[16] = &Harl::error;

    size_t pos = inpstr.find(level);
    if (pos != std::string::npos && (pos == 0 || pos == 5 || pos == 9 || pos == 16) && level.length() > 0) 
    {
        (this->*func[pos])();
        return ;
    }
    std::cout << " ___________________    . , ; .\n" << "(___________________|~~~~~X.;' .\n" << "                      \' `\" \' `\n" << "bann bumm" << std::endl;
}