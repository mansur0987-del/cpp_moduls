/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:49:36 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/03 12:33:17 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>

class Span
{
private:
	unsigned int		len;
	std::vector<int>	value;
public:
	Span();
	Span(unsigned int const len);
	Span(Span const &other);
	~Span();

	Span	&operator=(Span const &other);

	std::vector<int>	GetValue();
	void			addNumber(int const numb);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();


	struct TheSizeIsOverflowing : std::exception
	{
		const char * what () const throw ()
		{
			return "The Size Is Overflowing!";
		}
	};

	struct NoNumbersStoredOrOnlyOne : std::exception
	{
		const char * what () const throw ()
		{
			return "No Numbers Stored Or Only One!";
		}
	};
};



std::ostream	&operator<<(std::ostream &os, Span &to_print);



#endif
