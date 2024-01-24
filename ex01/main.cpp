#include "Serializer.hpp"
#include "Data.hpp"

int main() {
	Data d("LEE11111111");
	Data* d_ = NULL;

	d_ = Serializer::deserialize(Serializer::serialize(&d));

	std::cout << "d's name: " << d.getName() << std::endl;
	std::cout << "d_'s name: " << d_->getName() << std::endl;
	
	return 0;
}