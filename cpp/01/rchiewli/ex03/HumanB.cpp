/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:23 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/17 15:21:53 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <iterator>
#include <string>
#include <cctype>

std::string const &HumanB::getName(void)
{
    return (this->__name);
}


HumanB::HumanB(std::string name): __name(name)
{
    std::cout << this->__name << " was born" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->__name << " exploded" << std::endl;
}

// HumanB::HumanB(const HumanB &a)
// {
//     this->__name = a.__name;
//     std::cout << this->__name << " copied" << std::endl;
// }


// HumanB &HumanB::operator=(const HumanB &a)
// {
//     if (this != &a)
//     {
//         this->__name = a.__name;
//     }
//     std::cout << this->__name << " test =" << std::endl;
//     return *this;
// }

void HumanB::setName(std::string name)
{
    this->__name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->__weapon = &weapon;
}

void HumanB::attack(void)
{
    std::cout << this->__name << " attacks with their " << this->__weapon->getType() << std::endl;
}