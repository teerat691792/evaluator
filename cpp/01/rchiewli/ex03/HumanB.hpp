/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:26 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/16 12:02:41 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <iterator>
#include <string>
#include <cctype>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon      *__weapon;
        std::string __name;
        
    public:
        HumanB();
        HumanB(std::string name);
        // HumanB(const HumanB &a);
        // HumanB &operator=(const HumanB &a);
        std::string const &getName(void);
        void setName(std::string name);
        void attack();
        void setWeapon(Weapon &weapon);
        ~HumanB();
};

#endif