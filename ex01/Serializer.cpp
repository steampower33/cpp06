#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer() {}

Serializer & Serializer::operator = (const Serializer & other) {
    if(this != &other) {}
    return *this;
}

Serializer::Serializer(const Serializer & other) { * this = other;
}

Serializer:: ~ Serializer() {}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}