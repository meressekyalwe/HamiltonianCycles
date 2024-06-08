#pragma once

#include "Enumerator.h"

class IncreasingEnum : public Enumerator
{
public:

	void first() override;

	void next() override;

	bool end() override;

	bool is_increasing();

protected:

	bool c = false;
};
