/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:54:57 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/19 17:16:04 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int					value;
	static const int	bits = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed &other);

	Fixed	&operator=(Fixed &other);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};




#endif
