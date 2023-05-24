/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:02 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/17 15:17:36 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    // Zombie z01("salim");
    // Zombie z02(z01);
    Zombie *z01 = newZombie("ninew");
    z01->announce();
    randomChump("ajakkkkkkk");
    delete z01;
    return 0;
}