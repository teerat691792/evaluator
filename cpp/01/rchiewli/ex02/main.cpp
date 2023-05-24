/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:02 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/15 22:46:16 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iterator>
#include <string>
#include <cctype>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "string's address : " << &str << std::endl;
    std::cout << "string ptr's address : " << &stringPTR << std::endl;
    std::cout << "string ref's address : " << &stringREF << std::endl;

    std::cout << "string : " << str << std::endl;
    std::cout << "string ptr : " << *stringPTR << std::endl;
    std::cout << "string ref : " << stringREF << std::endl;
    return 0;
}