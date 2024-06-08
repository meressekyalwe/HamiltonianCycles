#pragma once

#include "Enumerator.h"

class DepthFirstEnum : public Enumerator
{
public:

	DepthFirstEnum();

	void first() override;

	void next() override;

	bool end() override;

	bool is_depthfirst();
};
