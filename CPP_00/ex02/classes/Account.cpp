/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 21:28:15 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/04 21:38:41 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts			= 0;
int	Account::_totalAmount			= 0;
int	Account::_totalNbDeposits		= 0;
int	Account::_totalNbWithdrawals	= 0;


Account::Account( int initial_deposit ) {
	this->_nbDeposits		= 0;
	this->_nbWithdrawals	= 0;
	this->_amount			= initial_deposit;
	this->_accountIndex		= Account::getNbAccounts();

	Account::_totalAmount	+= initial_deposit;
	Account::_nbAccounts++;
	
	_displayTimestamp();
	std::cout	<< "index:"		<< this->_accountIndex	<< ";"
				<< "amount:"	<< this->_amount		<< ";"
				<< "created"
				<< std::endl;
}

Account::~Account( void ) {
	Account::_nbAccounts--;

	_displayTimestamp();
	std::cout	<< "index:"			<< this->_accountIndex		<< ";"
				<< "amount:"		<< this->_amount			<< ";"
				<< "closed"
				<< std::endl;
}


void	Account::_displayTimestamp( void ) {
	time_t	now;
	char buffer[16];

	now = time(NULL);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localtime(&now));
	std::cout << "[" << buffer << "] ";
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout	<< "accounts:" 		<< getNbAccounts()		<< ";"
				<< "total:"			<< getTotalAmount()		<< ";"
				<< "deposits:"		<< getNbDeposits()		<< ";"
				<< "withdrawals:"	<< getNbWithdrawals()
				<< std::endl;
}


void	Account::makeDeposit( int deposit ) {
	this->_amount			+= deposit;
	this->_nbDeposits++;
	
	Account::_totalAmount	+= deposit;
	Account::_totalNbDeposits++;	

	_displayTimestamp();
	std::cout	<< "index:"			<< this->_accountIndex		<< ";"
				<< "p_amount:"		<< this->_amount - deposit	<< ";"
				<< "deposit:"		<< deposit					<< ";"
				<< "amount:"		<< this->_amount			<< ";"
				<< "nb_deposits:"	<< this->_nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout	<< "index:"			<< this->_accountIndex		<< ";"
				<< "p_amount:"		<< this->_amount			<< ";";

	if (withdrawal > this->_amount) {
		std::cout	<< "withdrawal:refused"	<< std::endl;

		return (false);
	} else {
		this->_amount			-= withdrawal;
		this->_nbWithdrawals++;
		
		Account::_totalAmount	-= withdrawal;
		Account::_totalNbWithdrawals++;
		
		std::cout	<< "withdrawal:"		<< withdrawal			<< ";"
					<< "amount:"			<< this->_amount		<< ";"
					<< "nb_withdrawals:"	<< this->_nbWithdrawals
					<< std::endl;

		return (true);
	}
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout	<< "index:"			<< this->_accountIndex	<< ";"
				<< "amount:"		<< this->_amount		<< ";"
				<< "deposits:"		<< this->_nbDeposits	<< ";"
				<< "withdrawals:"	<< this->_nbWithdrawals
				<< std::endl;
}


int Account::checkAmount( void ) const	{ return (this->_amount);				}

int	Account::getNbAccounts( void )		{ return (Account::_nbAccounts);			}
int	Account::getTotalAmount( void )		{ return (Account::_totalAmount);			}
int	Account::getNbDeposits( void )		{ return (Account::_totalNbDeposits);		}
int	Account::getNbWithdrawals( void )	{ return (Account::_totalNbWithdrawals);	}