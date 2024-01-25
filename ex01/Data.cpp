#include "Data.hpp"

Data::Data() : _name("Default") {}

Data::Data(const std::string& name) : _name(name) {}

Data& Data::operator=(const Data & other) {
    if(this != &other) {
		_name = other._name;
	}
    return *this;
}

const std::string& Data::getName() const {
	return _name;
}

Data::Data(const Data & other) {
	*this = other;
}

Data:: ~ Data() {}
