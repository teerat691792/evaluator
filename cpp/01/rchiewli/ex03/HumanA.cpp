/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:23 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/16 01:49:02 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>
#include <iterator>
#include <string>
#include <cctype>

std::string const &HumanA::getName(void)
{
    return (this->__name);
}

HumanA::HumanA(std::string name, Weapon &weapon) : __name(name), __weapon(weapon)
{
    std::cout << this->__name << " equiped with " << this->__weapon.getType() << std::endl;
}

// HumanA::HumanA(std::string name): __name(name)
// {
//     std::cout << this->__name << " was born" << std::endl;
// }

HumanA::~HumanA()
{
    std::cout << this->__name << " exploded" << std::endl;
}

// HumanA::HumanA(const HumanA &a)
// {
//     this->__name = a.__name;
//     std::cout << this->__name << " copied" << std::endl;
// }


HumanA &HumanA::operator=(const HumanA &a)
{
    if (this != &a)
    {
        this->__name = a.__name;
    }
    std::cout << this->__name << " test =" << std::endl;
    return *this;
}

void HumanA::setName(std::string name)
{
    this->__name = name;
}

void HumanA::attack(void)
{
    std::cout << this->__name << " attacks with their " << this->__weapon.getType() << std::endl;
}