#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# ifndef _UINTPTR_T
#  define _UINTPTR_T
typedef unsigned long           uintptr_t;

#endif /* _UINTPTR_T */

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

