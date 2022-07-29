/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:49:40 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/02 14:17:59 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

struct s_me
{
	s_me();
	int	name;
}	typedef t_me;

s_me::s_me() : name(111)
{
}

std::ostream	&operator<<(std::ostream &os, t_me &to_print)
{
	os << to_print.name;
	return (os);
}

template <typename T>
void	ft_print(T &print)
{
	std::cout << print << std::endl;
}

int main( void )
{
	char	name[] = "armaxima";
	int		i[] = {55, 43, 42, 50};
	t_me	me[7];

	iter(name, 9, ft_print);
	iter(i, 4, ft_print);
	iter(me, 7, ft_print);
	return 0;
}
