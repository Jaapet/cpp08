/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:59:46 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/23 18:25:04 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
{
    _size = n;
}

Span::Span(const Span &instance)
{
    *this = instance;
}

Span::~Span(){}

Span &Span::operator=(const Span &instance)
{
    this->_span = instance._span;
    this->_size = instance._size;
    return (*this);
}

char const  *Span::SpanFullException::what() const throw()
{
    return ("Span is full");
}

char const  *Span::SpanSizeException::what() const throw()
{
    return ("Span size is lower than 2");
}

void Span::addNumber(int n)
{
    if (_span.size() < _size)
        _span.push_back(n);
    else
        throw Span::SpanFullException();
}

int Span::shortestSpan()
{
    if (_span.size() < 2)
        throw Span::SpanSizeException();
    std::vector<int>  list = _span;
    std::sort(list.begin(), list.end());
    int min = list[1] - list[0];
    for (unsigned int i = 0; i < this->_size - 1; i++)
        min = std::min(min, list[i + 1] - list[i]);
    return (min);
}

int Span::longestSpan()
{
    if (_span.size() < 2)
        throw Span::SpanSizeException();
    std::vector<int>  list = _span;
    std::sort(list.begin(), list.end());
    return (list[list.size() - 1] - list[0]);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator i = begin; i < end; i++)
    {
        addNumber(*i);
    }
}