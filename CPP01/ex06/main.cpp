/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:02:23 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 13:04:59 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main (int argc, char** argv)
{
	Karen simone;
	if (argc != 2)
		return 1;

	simone.filter(argv[1]);
	return 0;
}
