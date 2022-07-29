/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phbook.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:10:30 by armaxima          #+#    #+#             */
/*   Updated: 2022/04/21 17:54:51 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHBOOK_CLASS_HPP
# define PHBOOK_CLASS_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"

class PhBook
{
private:
	void	Searching(void);
public:
	PhBook(/* args */);
	~PhBook();

	std::string read_line;
	int			index;
	void	readinput(void);
	Contact	contactes[8];
};





#endif
