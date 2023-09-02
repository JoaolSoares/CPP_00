/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 21:28:15 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/02 00:10:44 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::getNbAccounts( void )		{ return (Account::_nbAccounts);			}
int	Account::getTotalAmount( void )		{ return (Account::_totalAmount);			}
int	Account::getNbDeposits( void )		{ return (Account::_totalNbDeposits);		}
int	Account::getNbWithdrawals( void )	{ return (Account::_totalNbWithdrawals);	}

void	Account::_displayTimestamp( void ) {
	std::time_t	t = std::time(0);
	std::cout << t << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	// _displayTimestamp();
	// std::cout	<< "accounts:"		+ getNbAccounts()		+ ";"
	// 			<< "total:"			+ getTotalAmount()		+ ";"
	// 			<< "deposits:"		+ getNbDeposits()		+ ";"
	// 			<< "withdrawals:"	+ getNbWithdrawals()	+ ";"
	// 			<< std::endl;
}


// Account::Account( int initial_deposit ) {
	
// }
// Account::~Account( void ) {
	
// }


// void	Account::makeDeposit( int deposit ) {
	
// }
// bool	Account::makeWithdrawal( int withdrawal ) {
	
// }
// int Account::checkAmount( void ) const {
	
// }
// void	Account::displayStatus( void ) const {
	
// }

