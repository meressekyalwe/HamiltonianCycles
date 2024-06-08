
#include "BacktrackSearch.h"
#include "IncreasingLinSearch.h"
#include "DepthFirstLinSearch.h"

BacktrackSearch::BacktrackSearch(AlgoTypes algo)
{
	this->algo = algo;

	if (this->algo == AlgoTypes::DepthFirst)
	{
		s = new DepthFirstLinSearch();
	}
	else if (this->algo == AlgoTypes::Increasing)
	{
		s = new IncreasingLinSearch();
	}
}

void BacktrackSearch::run()
{
	s->run();
}

bool BacktrackSearch::found()
{
	return false;
}

Task* BacktrackSearch::elem()
{
	return s->elem();
}
