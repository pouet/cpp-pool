#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <Contact.class.hpp>

class Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

	void add_contact(Contact contact);

	bool is_full(void) const;
	bool is_empty(void) const;

	int get_ncontacts(void) const;

	std::string truncate_string(std::string s, size_t w);

	void print(void);
	void print_entry(int n);

private:
	Contact _contacts[8];
	int		_ncontacts;

};

#endif
