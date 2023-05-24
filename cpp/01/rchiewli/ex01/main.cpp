/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:02 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/17 15:19:06 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include <stdio.h>
#include <unistd.h>

int main()
{
    Zombie *zz;

    zz = zombieHorde(5, "huakuy");
    for (int i = 0; i < 5; i++)
    {
        zz[i].announce();
    }
    delete[] zz;
    return 0;
}