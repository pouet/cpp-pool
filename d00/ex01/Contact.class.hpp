#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>

class Contact {

public:
	Contact(void);
	~Contact(void);

	std::string		get_first_name() const;
	void			set_first_name(std::string s);

	std::string		get_last_name() const;
	void			set_last_name(std::string s);

	std::string		get_nickname() const;
	void			set_nickname(std::string s);

	std::string		get_login() const;
	void			set_login(std::string s);

	std::string		get_postal_address() const;
	void			set_postal_address(std::string s);

	std::string		get_email_address() const;
	void			set_email_address(std::string s);

	std::string		get_phone_number() const;
	void			set_phone_number(std::string s);

	std::string		get_birthday_date() const;
	void			set_birthday_date(std::string s);

	std::string		get_favorite_meal() const;
	void			set_favorite_meal(std::string s);

	std::string		get_underwear_color() const;
	void			set_underwear_color(std::string s);

	std::string		get_darkest_secret() const;
	void			set_darkest_secret(std::string s);

private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_login;
	std::string		_postal_address;
	std::string		_email_address;
	std::string		_phone_number;
	std::string		_birthday_date;
	std::string		_favorite_meal;
	std::string		_underwear_color;
	std::string		_darkest_secret;
};

#endif
