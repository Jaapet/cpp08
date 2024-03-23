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

# include <vector>
# include <algorithm>
# include <iostream>

class Span
{
    private:
        std::vector<int> _v;
        unsigned int _n;
    public:
        Span(unsigned int n);
        Span(const Span &copy);
        ~Span();
        Span &operator=(const Span &copy);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
