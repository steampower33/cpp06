#include "func.hpp"

int main() {
	static unsigned int seed;
	if (seed == 0)
	{
		seed = (unsigned int)time(NULL);
		std::srand(seed);
	}

	Base* b = generate();
	identify(b);
	identify(*b);

	delete b;
}