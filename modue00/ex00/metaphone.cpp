/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Metaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarbout <fsarbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 20:16:18 by fsarbout          #+#    #+#             */
/*   Updated: 2021/07/14 20:38:46 by fsarbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **ag)
{
	char str[] = "* loud and unbrearable feedback noise *\n";
	if (ac == 1)
	{
		for (size_t i = 0; i < strlen(str); i++)
			putchar(toupper(str[i]));
	}
	for (int i = 1; i < ac; ++i )
	{
		for(size_t j = 0; j < strlen(ag[i]); j++)
			putchar(toupper(ag[i][j]));
		std::cout << "\n";
	}
}