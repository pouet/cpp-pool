#include "Logger.hpp"

int main(void)
{
	Logger log("toto.log");

	log.log("logToConsole", "coucou");
	log.log("logToFile", "coucou");
	log.log("nothing", "coucou");

	log.log("logToConsole", "autre entree de log");
	log.log("logToFile", "autre entree de log");
	log.log("nothing", "autre entree de log");
	return 0;
}
