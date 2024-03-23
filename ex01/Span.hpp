/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:59:46 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/23 17:51:47 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <vector>
# include <algorithm>
# include <iostream>

class Span
{
    private:
        std::vector<int>	_span;
        unsigned int		_size;
    public:
        Span(unsigned int n);
        Span(const Span &instance);
        ~Span();
        Span &operator=(const Span &instance);

        class   SpanFullException: public std::exception
        {
            public:
                virtual char const  *what(void) const throw();
        };

		class   SpanSizeException: public std::exception
        {
            public:
                virtual char const  *what(void) const throw();
        };
    
        void	addNumber(int n);
        int		shortestSpan();
        int		longestSpan();
        void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
