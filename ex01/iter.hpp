/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 04:20:50 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/04 04:42:57 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template<typename T, typename F>
void iter(T *array, std::size_t length, void(*func)(F))
{
	if (array == NULL)
		return ;
	for(std::size_t i = 0; i < length; i++)
		func(array[i]);
}
#endif