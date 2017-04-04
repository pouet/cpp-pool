#include <iostream>
#include <iomanip>
#include <Phonebook.class.hpp>

Phonebook::Phonebook() : _ncontacts(0)
{
}

Phonebook::~Phonebook()
{
}

void Phonebook::add_contact(Contact contact)
{
	if (is_full())
		return;
	_contacts[_ncontacts++] = contact;
}

bool Phonebook::is_full() const
{
	return this->_ncontacts >= 8;
}

bool Phonebook::is_empty() const
{
	return this->_ncontacts == 0;
}

int Phonebook::get_ncontacts() const
{
	return this->_ncontacts;
}

std::string Phonebook::truncate_string(std::string s, size_t w)
{
	if (s.length() > w)
		s = s.substr(0, w - 1) + ".";
	return s;
}

void Phonebook::print(void)
{
	if (is_empty()) {
		std::cout << "No contacts to print." << std::endl;
		return;
	}

	std::cout.setf(std::ios::ios_base::right);

	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;

	for (int i = 0; i < _ncontacts; i++) {
		std::cout << std::setw(10) << i << "|" ;
		std::cout << std::setw(10) << truncate_string(_contacts[i].get_first_name(), 10) << "|";
		std::cout << std::setw(10) << truncate_string(_contacts[i].get_last_name(), 10) << "|";
		std::cout << std::setw(10) << truncate_string(_contacts[i].get_nickname(), 10) << std::endl;
	}
}

void Phonebook::print_entry(int n)
{
	if (n < 0 || n > _ncontacts)
		return;
	std::cout << std::setw(20) << "first name : " << _contacts[n].get_first_name() << std::endl;
	std::cout << std::setw(20) << "last name : " << _contacts[n].get_last_name() << std::endl;
	std::cout << std::setw(20) << "nickname : " << _contacts[n].get_nickname() << std::endl;
	std::cout << std::setw(20) << "login : " << _contacts[n].get_login() << std::endl;
	std::cout << std::setw(20) << "post addr : " << _contacts[n].get_postal_address() << std::endl;
	std::cout << std::setw(20) << "email : " << _contacts[n].get_email_address() << std::endl;
	std::cout << std::setw(20) << "phone : " << _contacts[n].get_phone_number() << std::endl;
	std::cout << std::setw(20) << "birthday : " << _contacts[n].get_birthday_date() << std::endl;
	std::cout << std::setw(20) << "meal : " << _contacts[n].get_favorite_meal() << std::endl;
	std::cout << std::setw(20) << "underwear color: " << _contacts[n].get_underwear_color() << std::endl;
	std::cout << std::setw(20) << "darkest secret : " << _contacts[n].get_darkest_secret() << std::endl;
}
