
#include "IncreasingEnum.h"

void IncreasingEnum::first()
{
	u = new Task();

	ind = 0;

	c = false;
}

void IncreasingEnum::next()
{
	c = true;

	while (c && (ind <= u->n))
	{
		if (u->v[ind] < (u->m[ind] - 1))
		{
			u->v[ind] += 1;

			c = false;
		}
		else
		{
			u->v[ind] = 0;

			if (this->ind > 0) this->ind -= 1;
		}
	}
}

bool IncreasingEnum::end()
{
	return c;
}

bool IncreasingEnum::is_increasing()
{
	return true;
}