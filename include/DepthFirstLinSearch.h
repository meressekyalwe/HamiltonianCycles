#pragma once

#include "LinearSearch.h"
#include "DepthFirstEnum.h"


class DepthFirstLinSearch : public LinearSearch
{
public:

	DepthFirstLinSearch();

	void run() override;

	Task* elem() override;

protected:

	bool cond();

private:

	DepthFirstEnum* t;
};