#include <iostream>
#include <Phonebook.class.hpp>
#include <Contact.class.hpp>

void getstring(std::string prompt, std::string &s)
{
	std::cout << prompt;
	getline(std::cin, s);
}

void command_add(Phonebook &book)
{
	Contact c;
	std::string s;

	if (book.is_full()) {
		std::cout << "Phonebook is full. Can't add new contact.\n";
		return;
	}

	getstring("Enter first name : ", s);
	c.set_first_name(s);
	getstring("Enter last name : ", s);
	c.set_last_name(s);
	getstring("Enter nickname name : ", s);
	c.set_nickname(s);
	getstring("Enter login : ", s);
	c.set_login(s);
	getstring("Enter postal address : ", s);
	c.set_postal_address(s);
	getstring("Enter mail address : ", s);
	c.set_email_address(s);
	getstring("Enter phone number : ", s);
	c.set_phone_number(s);
	getstring("Enter birthday date : ", s);
	c.set_birthday_date(s);
	getstring("Enter favorite meal : ", s);
	c.set_favorite_meal(s);
	getstring("Enter underwear color : ", s);
	c.set_underwear_color(s);
	getstring("Enter darkest secret : ", s);
	c.set_darkest_secret(s);

	book.add_contact(c);
	std::cout << "Contact successfully added !\n";
}

void command_search(Phonebook &book)
{
	std::string s;

	book.print();
	if (book.is_empty())
		return;

	getstring("Enter an index : ", s);

	if (s.length() != 1 || s[0] < '0' || s[0] > '7' ||
		(s[0] - '0') >= book.get_ncontacts())
		std::cout << "Invalid index\n";
	else
		book.print_entry(s[0] - '0');
}

int main(void)
{
	Phonebook book;
	std::string s;

	while (1) {
		getstring("Enter a command : ", s);

		if (std::cin.fail()) {
			std::cout << "\n";
			break;
		}
		else {
			if (s.compare("EXIT") == 0)
				break;
			else if (s.compare("ADD") == 0) {
				command_add(book);
			}
			else if (s.compare("SEARCH") == 0) {
				command_search(book);
			}
			else {
				std::cout << "Possibles commands are :\n";
				std::cout << " - ADD : add new contact\n";
				std::cout << " - SEARCH : search for a contact\n";
				std::cout << " - EXIT : exit this program\n";
			}
		}
	}
	return 0;
}
