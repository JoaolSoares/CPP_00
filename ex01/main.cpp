/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:54:45 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/21 18:38:00 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void menu(void) {
	cout	<< "-------------------------"	<< endl
			<< "|       PhoneBook       |"	<< endl
			<< "-------------------------"	<< endl
			<< "[ADD] Add a new contact"	<< endl
			<< "[SEARCH] Search a contact"	<< endl
			<< "[EXIT] Exit the PhoneBook"	<< endl
			<< "-------------------------"	<< endl
			<< "Option: ";
}

int main(void) {
	string opt;

	do
	{
		menu();

		cin >> opt;
		
		if (opt == "ADD" || opt == "add") {
			
		}
		else if (opt == "SEARCH" || opt == "search") {
			
		}
		else if (opt != "EXIT" && opt != "exit")
			cout << "Error! Invalid Option" << endl;

	} while (opt != "EXIT" && opt != "exit");

	cout << "Exiting..." << endl;
	return (0);
}
