#include <iostream>
#include "Pony.hpp"


Pony::Pony() {
	std::cout << "New poney !" << std::endl;
}

Pony::~Pony() {
	std::cout << "Poney killed ! :'(" << std::endl;
}

void Pony::ponyOnTheHeap() {
	Pony *p = new Pony();
	p->do_some_struff();
	delete p;
}

void Pony::ponyOnTheStack() {
	Pony p;
	p.do_some_struff();
}

void Pony::do_some_struff() {
	std::cout << "Le poney est un ongulé gras de solipèderaste perissodactylophobe (voir : écriture de poney) avec un nom aussi ridicule qu'insignifiant. Issu d'une sélection très ancienne (d'où l'expression « il est poney d'hier » ou Once a poney time en anglais), la consanguinité en a fait un animal complètement dégénéré. Il est inutile aux progrès de l'humanité puisqu'il va moins vite et peut porter moins lourd qu'un cheval. Remarquez que le cheval s'est également révélé inutile aux progrès de l'humanité... Il existe différentes variétés de poney comme le Shetland et le Falabella ou le poisson poney qui respire sous l'eau. Mais le plus dangereux, le poney du Connemara, est fan de Michel Sardou. Le Ja-poney, quant à lui, est un as de l'appareil photo numérique." << std::endl;
}
