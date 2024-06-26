#include "Task.h"
#include <iostream>
#include <omp.h>


bool Task::rho(const int i)
{
	if (!hamCycleUtil(i))
	{
		return true;
	}
	else
	{
		path[i] = -1;
	}

	return false;
}

std::pair<bool, const  int> Task::correct(const int ind)
{
	bool l = true;

	int i = ind;

	for (i; l && i < n; ++i)
	{
		l = this->rho(i);
	}

	return std::make_pair(l, i - 1);
}

bool Task::isSafe(const int v, const int pos)
{
	if (graph[path[pos - 1]][v] == 0) return false;

	for (int i = 0; i < pos; i++)
	{
		if (path[i] == v) return false;
	}

	return true;
}

bool Task::hamCycleUtil(const int pos)
{
#pragma omp parallel
	for (int v = 1; v < n; v++)
	{
		if (isSafe(v, pos))
		{
			path[pos] = v;
		}
	}

	return false;
}

void Task::print()
{
#pragma omp parallel for ordered
	for (int i = 0; i < this->n; i++)
	{
#pragma omp ordered
		std::cout << " " << path[i] << " ";
	}

	std::cout << " " << path[0];

	std::cout << std::endl;
}