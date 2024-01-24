#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class Data;

class Serializer {
public:
	~Serializer();
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
private:
	Serializer();
	Serializer(const Serializer& other);
	Serializer& operator=(const Serializer& other);
};

#endif