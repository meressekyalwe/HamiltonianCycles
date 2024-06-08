
#include "BacktrackSearch.h"
#include <chrono>

int main()
{
	auto start = std::chrono::steady_clock::now();

	BacktrackSearch b(AlgoTypes::Increasing);

	b.run();

	b.elem()->print();

	auto end = std::chrono::steady_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;

	std::cout << "elapsed time: " << elapsed_seconds.count() << " s" << std::endl;
	
	return 0;
}