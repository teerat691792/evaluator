/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:58:06 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/15 21:41:11 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zom = new Zombie[N];

    
    for (int i = 0; i < N; i++)
    {
        std::stringstream ss;
        std::string       str;
        
        ss << name;
        ss << "_";
        ss << i + 1;
        str = ss.str();
        zom[i].setName(str);
    }
    return (zom);
}