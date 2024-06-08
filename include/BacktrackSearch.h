#pragma once

#include "LinearSearch.h"


enum AlgoTypes
{
	DepthFirst = 1,
	Increasing = 2
};

class BacktrackSearch
{
public:

	BacktrackSearch(AlgoTypes algo);

	void run();

	bool found();

	Task* elem();

protected:

	LinearSearch* s = nullptr;
};
