/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:25:34 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/02 17:25:00 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : array(0), len(0)
{
}

template <typename T>
Array<T>::Array(unsigned int len)
{
	this->array = new T[len];
	this->len = len;
}

template <typename T>
Array<T>::Array(Array<T> const &other) : len(other.len)
{
	this->array = new T[other.len];
	unsigned int i = 0;
	while (i < other.len)
	{
		this->array[i] = other.array[i];
		i++;
	}
}

template <typename T>
Array<T>::~Array()
{
	if (this->array)
		delete[] this->array;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array<T> const &other)
{
	if (this == &other)
		return (*this);
	this->len = other.len;
	delete[] this->array;
	this->array = new T[other.len];
	unsigned int i = 0;
	while (i < other.len)
	{
		this->array[i] = other.array[i];
		i++;
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= this->len || !(this->len))
		throw Array<T>::IndexIsOutOfBounds();
	return (this->array[i]);
}

template <typename T>
unsigned int	Array<T>::size()
{
	return (this->len);
}
