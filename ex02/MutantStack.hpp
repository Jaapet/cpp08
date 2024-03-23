/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:59:46 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/23 19:34:58 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack():std::stack<T>(){}
        MutantStack(MutantStack const & instance):std::stack<T>(instance){}
        virtual ~MutantStack(){}
		MutantStack &operator=(const MutantStack &instance)
		{
			std::stack<T>::operator=(instance);
			return (*this);
		}

        typedef typename	std::stack<T>::container_type::iterator iterator;
        iterator	begin()
		{
            return (this->c.begin());
		}
        iterator	end()
		{
            return (this->c.end());
		}
};
