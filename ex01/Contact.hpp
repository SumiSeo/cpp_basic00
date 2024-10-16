#pragma once
#ifndef __CONTACT__H
# define __CONTACT__H

# include <iomanip>
# include <iostream>
# include <istream>
# include <ostream>
# include <string>

class Contact
{
  public:
	int index;
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkSecret;
};

std::string FormatStr(std::string s);
void	FormatContact(int index, std::string LastName, std::string Nickname,
			std::string FirstName);
void	DisplayContactColumn(void);
int		GetLength(Contact *Lists);

#endif // __CONTACT_H__