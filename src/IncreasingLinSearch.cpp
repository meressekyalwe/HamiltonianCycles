
#include "IncreasingLinSearch.h"
#include "IncreasingEnum.h"

IncreasingLinSearch::IncreasingLinSearch()
{
	t = new IncreasingEnum();
}

void IncreasingLinSearch::run()
{
	bool l = false;

	t->first();

	if (!l && !t->end())
	{
		auto u = t->getTask();

		l = u->correct(t->getInd()).first;

		auto ind = u->correct(t->getInd()).second;

		t->setInd(ind);

		t->next();
	}
}

Task* IncreasingLinSearch::elem()
{
	return t->getTask();
}

bool IncreasingLinSearch::cond()
{
	return t->end();
}

