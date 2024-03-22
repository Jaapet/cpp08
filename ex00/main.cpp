/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:59:35 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/22 17:54:44 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::list<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    try
    {
        std::cout << easyfind(v, 3) << std::endl;
        std::cout << easyfind(v, 6) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error" << std::endl;
    }
    return (0);
}
