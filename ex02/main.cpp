#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {
	int ran = std::rand() % 3;
	switch (ran) {
		case 0:
			std::cout << "Make A" << std::endl;
			return new A();
		case 1:
			std::cout << "Make B" << std::endl;
			return new B();
		case 2:
			std::cout << "Make C" << std::endl;
			return new C();
		default:
			return NULL;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "This is Pointer of A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "This is Pointer of B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "This is Pointer of C" << std::endl;
}

void identify(Base& p) {
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "This is Reference of A" << std::endl;
	}
	catch(std::exception&) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "This is Reference of B" << std::endl;
	}
	catch(std::exception&) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "This is Reference of C" << std::endl;
	}
	catch(std::exception&) {}
	
}

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
}