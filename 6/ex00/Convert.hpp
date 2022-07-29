/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:30:22 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/31 15:43:18 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <limits>

class Convert
{
private:
	double		arg;
public:
	Convert();
	Convert(Convert const &other);
	Convert(double arg);
	~Convert();
	Convert	&operator=(Convert const &other);
	double	Getarg();
	void	ConvertChar();
	void	ConvertInt();
	void	ConvertFloat();
	void	ConvertDouble();
};

void	check_argv_0(int argc, char **argv);

#endif
