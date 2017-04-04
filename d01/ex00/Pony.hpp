#ifndef PONY_HPP
#define PONY_HPP

class Pony {

public:
	Pony();
	~Pony();

	void ponyOnTheHeap() const;
	void ponyOnTheStack() const;

private:
	void do_some_struff() const;
};

#endif
