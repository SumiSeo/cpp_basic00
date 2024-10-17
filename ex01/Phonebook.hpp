#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <list>
# include <string>

class Contact
{
  public:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	int PhoneNumber;
	int index;
	std::string DarkSecret;
};

#endif // PHONEBOOK_HPP