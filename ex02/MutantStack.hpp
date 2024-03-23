/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:59:46 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/22 17:54:14 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stack>
# include <list>
# include <deque>
#include <iostream>
#include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const & src) : std::stack<T>(src) {}
        virtual ~MutantStack() {}

        typedef typename std::deque<T>::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }

        iterator end()
        {
            return this->c.end();
        }

};
