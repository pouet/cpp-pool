#include <iostream>
#include <Contact.class.hpp>

Contact::Contact(void)
{
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_login = "";
	_postal_address = "";
	_email_address = "";
	_phone_number = "";
	_birthday_date = "";
	_favorite_meal = "";
	_underwear_color = "";
	_darkest_secret = "";
}

Contact::~Contact(void)
{
}

std::string		Contact::get_first_name() const {
	return _first_name;
}

void			Contact::set_first_name(std::string s) {
	_first_name = s;
}

std::string		Contact::get_last_name() const {
	return _last_name;
}

void			Contact::set_last_name(std::string s) {
	_last_name = s;
}

std::string		Contact::get_nickname() const {
	return _nickname;
}

void			Contact::set_nickname(std::string s) {
	_nickname = s;
}

std::string		Contact::get_login() const {
	return _login;
}

void			Contact::set_login(std::string s) {
	_login = s;
}

std::string		Contact::get_postal_address() const {
	return _postal_address;
}

void			Contact::set_postal_address(std::string s) {
	_postal_address = s;
}

std::string		Contact::get_email_address() const {
	return _email_address;
}

void			Contact::set_email_address(std::string s) {
	_email_address = s;
}

std::string		Contact::get_phone_number() const {
	return _phone_number;
}

void			Contact::set_phone_number(std::string s) {
	_phone_number = s;
}

std::string		Contact::get_birthday_date() const {
	return _birthday_date;
}

void			Contact::set_birthday_date(std::string s) {
	_birthday_date = s;
}

std::string		Contact::get_favorite_meal()const  {
	return _favorite_meal;
}

void			Contact::set_favorite_meal(std::string s) {
	_favorite_meal = s;
}

std::string		Contact::get_underwear_color() const {
	return _underwear_color;
}

void			Contact::set_underwear_color(std::string s) {
	_underwear_color = s;
}

std::string		Contact::get_darkest_secret() const {
	return _darkest_secret;
}
void			Contact::set_darkest_secret(std::string s) {
	_darkest_secret = s;
}
