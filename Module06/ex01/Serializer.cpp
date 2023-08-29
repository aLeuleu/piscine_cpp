#include <iostream>
#include "Serializer.hpp"
#include <cstdint>

Serializer::Serializer(void) {}

Serializer::Serializer(const Serializer &other) { *this = other; }

Serializer::~Serializer(void) {}

Serializer &Serializer::operator=(const Serializer &other) {
	(void) other;
	return (*this);
}

std::uintptr_t Serializer::serialize(Data *ptr) {
	std::uintptr_t res = reinterpret_cast<std::uintptr_t>(ptr);
	std::cout << "Serialized "  << ptr  << " into "  << res << std::endl;
	return res;
}
Data *Serializer::deserialize(std::uintptr_t raw) {
	Data *res = reinterpret_cast<Data*>(raw);
	std::cout << "Deserialized "  << raw  << " into "  << res << std::endl;
	return res;
}
