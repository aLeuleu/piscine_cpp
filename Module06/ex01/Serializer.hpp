#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <cstdint>
#include <string>

struct Data{
	std::string songName;
	std::string text;
};

class Serializer {
	public:
		Serializer();
		Serializer(const Serializer &other);
		virtual ~Serializer();

		Serializer &operator=(const Serializer &other);
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif

