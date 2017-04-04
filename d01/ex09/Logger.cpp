#include <ctime>
#include <fstream>
#include <iostream>
#include "Logger.hpp"

Logger::Logger(std::string filename) : _filename(filename)
{
}

Logger::~Logger(void)
{
}

void Logger::log(std::string const & dest, std::string const & message)
{
	struct {
		std::string name;
		void (Logger::*f)(std::string const &) const;
	} tab[2] = {
		{ .name = "logToConsole", .f = &Logger::_logToConsole },
		{ .name = "logToFile", .f = &Logger::_logToFile }
	};

	std::string logmsg = _makeLogEntry(message);

	for (int i = 0; i < 2; i++) {
		if (tab[i].name == dest)
			(this->*(tab[i].f))(logmsg);
	}
}

void Logger::_logToConsole(std::string const & s) const
{
	std::cout << s << std::endl;
}

void Logger::_logToFile(std::string const & s) const
{
	std::ofstream out;

	out.open(_filename, std::ios_base::app);
	if (!out.is_open()) {
		std::cout << "Can't open the file : " << _filename << std::endl;
		return;
	}

	out << s << std::endl;

	out.close();
}

std::string Logger::_makeLogEntry(std::string msg) const
{
	char buf[64];
	std::time_t now;
	std::string s;

	std::time(&now);
	strftime(buf, 64, "[%Y%m%d_%OH%OM%OS] ", gmtime(&now));

	s = buf + msg;

	return s;
}
