#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <Contact.class.hpp>

class Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

	void add_contact(Contact contact);

	bool is_full();
	bool is_empty();

	int get_ncontacts();

	std::string truncate_string(std::string s, size_t w);

	void print();
	void print_entry(int n);

private:
	Contact _contacts[8];
	int		_ncontacts;

};

#endif
