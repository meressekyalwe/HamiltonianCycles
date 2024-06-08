#pragma once

#include "LinearSearch.h"
#include "IncreasingEnum.h"

class IncreasingLinSearch : public LinearSearch
{
public:

	IncreasingLinSearch();

	void run() override;

	Task* elem() override;
	
	bool cond() override;

private:

	IncreasingEnum* t;
};