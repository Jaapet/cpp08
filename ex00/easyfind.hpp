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

#include <iostream>
#include <list>
#include <algorithm>

template <typename T>
int	easyfind(T container, int n)
{
	typename T::iterator	i = std::find(container.begin(), container.end(), n);
	if (*i != n)
		throw std::exception();
	return (*i);
}
