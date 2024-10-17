#include "Phonebook.hpp"

std::string FormatStr(std::string s)
{
	if (s.length() > 10)
	{
		std::string SplitStr = s.substr(0, 10);
		SplitStr[9] = '.';
		return (SplitStr);
	}
	else
		return (s);
}

void	FormatContact(std::string FirstName, std::string LastName,
		std::string Nickname, int index)
{
	std::cout << std::right << std::setw(10) << index << "|" << std::right << std::setw(10) << LastName << "|" << std::right << std::setw(10) << Nickname << "|" << std::right << std::setw(10) << FirstName << "|" << std::endl;
}

void	DisplayContactColumn(void)
{
	std::cout << std::right << std::setw(10) << "Index"
				<< "|" << std::right << std::setw(10) << "FirstName"
				<< "|" << std::right << std::setw(10) << "LastName"
				<< "|" << std::right << std::setw(10) << "Nickname"
				<< "|" << std::endl;
}
