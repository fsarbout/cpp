/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarbout <fsarbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 20:16:18 by fsarbout          #+#    #+#             */
/*   Updated: 2021/09/05 16:13:22 by fsarbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

#define string std::string
#define cout std::cout
#define endl std::endl

int main(int ac, char **ag)
{
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; ++i )
	{
		for(size_t j = 0; j < strlen(ag[i]); j++)
			cout << (toupper(ag[i][j]));
			// putwchar(toupper(ag[i][j]));
			cout << putwchar(7272);
		// toupper 
	}
	cout << endl;
}