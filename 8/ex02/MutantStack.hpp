/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:49:36 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/03 16:14:17 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
	/* data */
public:
	MutantStack();
	virtual	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin()
	{
		return (std::stack<T>::c.begin());
	}

	iterator	end()
	{
		return (std::stack<T>::c.end());
	}
};

#include "MutantStack.tpp"


#endif
