#pragma once

#include "Enumerator.h"

class LinearSearch
{
public:

	virtual void run();

	virtual Task* elem();

protected:

	virtual bool cond();
};