/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:54:57 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/20 16:11:05 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					value;
	static const int	bits = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &other);
	Fixed(int other);
	Fixed(float other);

	Fixed	&operator=(Fixed const &other);
	bool	operator>(Fixed const &other);
	bool	operator<(Fixed const &other);
	bool	operator>=(Fixed const &other);
	bool	operator<=(Fixed const &other);
	bool	operator==(Fixed const &other);
	bool	operator!=(Fixed const &other);

	Fixed	operator+(Fixed const &other);
	Fixed	operator-(Fixed const &other);
	Fixed	operator*(Fixed const &other);
	Fixed	operator/(Fixed const &other);

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(Fixed const &a, Fixed const &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);
};

std::__1::ostream	&operator<<(std::__1::ostream &__os, const Fixed &other);


#endif
