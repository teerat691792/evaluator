/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:26 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/16 12:00:07 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iterator>
#include <string>
#include <cctype>

class Weapon
{
    private:
        std::string __type;
    public:
        Weapon();
        Weapon(std::string name);
        // Weapon(const Weapon &a);
        // Weapon &operator=(const Weapon &a);
        std::string const &getType(void);
        void setType(std::string name);
        ~Weapon();
};

#endif