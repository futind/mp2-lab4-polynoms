#pragma once

#include "Iterator.h"
#include "Monom.h"
#include "Polynom.h"


class PIterator : public Iterator {
	int i;
	int N;
	int *mem;
public:
	PIterator(int _N, int *_mem);
	bool hasNext();
	Monom Next();
};