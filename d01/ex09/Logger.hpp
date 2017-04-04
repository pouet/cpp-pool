#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>

class Logger {

public:
	Logger(std::string filename);
	~Logger(void);

	void log(std::string const & dest, std::string const & message);

private:
	std::string _filename;

	void _logToConsole(std::string const & s) const;
	void _logToFile(std::string const & s) const;

	std::string _makeLogEntry(std::string msg) const;

};

#endif
