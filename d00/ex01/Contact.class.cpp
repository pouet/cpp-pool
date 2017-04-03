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

std::string		Contact::get_first_name() {
	return this->_first_name;
}

void			Contact::set_first_name(std::string s) {
	this->_first_name = s;
}

std::string		Contact::get_last_name() {
	return this->_last_name;
}

void			Contact::set_last_name(std::string s) {
	this->_last_name = s;
}

std::string		Contact::get_nickname() {
	return this->_nickname;
}
void			Contact::set_nickname(std::string s) {
	this->_nickname = s;
}

std::string		Contact::get_login() {
	return this->_login;
}
void			Contact::set_login(std::string s) {
	this->_login = s;
}

std::string		Contact::get_postal_address() {
	return this->_postal_address;
}

void			Contact::set_postal_address(std::string s) {
	this->_postal_address = s;
}

std::string		Contact::get_email_address() {
	return this->_email_address;
}
void			Contact::set_email_address(std::string s) {
	this->_email_address = s;
}

std::string		Contact::get_phone_number() {
	return this->_phone_number;
}

void			Contact::set_phone_number(std::string s) {
	this->_phone_number = s;
}

std::string		Contact::get_birthday_date() {
	return this->_birthday_date;
}

void			Contact::set_birthday_date(std::string s) {
	this->_birthday_date = s;
}

std::string		Contact::get_favorite_meal() {
	return this->_favorite_meal;
}

void			Contact::set_favorite_meal(std::string s) {
	this->_favorite_meal = s;
}

std::string		Contact::get_underwear_color() {
	return this->_underwear_color;
}

void			Contact::set_underwear_color(std::string s) {
	this->_underwear_color = s;
}

std::string		Contact::get_darkest_secret() {
	return this->_darkest_secret;
}
void			Contact::set_darkest_secret(std::string s) {
	this->_darkest_secret = s;
}
