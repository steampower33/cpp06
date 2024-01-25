#include "Serializer.hpp"
#include "Data.hpp"

int main() {
	Data d("LEE11111111");
	std::cout << &d << std::endl;

	uintptr_t u;
	u = Serializer::serialize(&d);
	std::cout << u << std::endl;
	
	Data* d_ = NULL;
	d_ = Serializer::deserialize(u);
	std::cout << d_ << std::endl;

	std::cout << "d's name: " << d.getName() << std::endl;
	std::cout << "d_'s name: " << d_->getName() << std::endl;
	
	return 0;
}