#ifndef CPP_MODULE07_EX02_ARRAY_HPP_
# define CPP_MODULE07_EX02_ARRAY_HPP_

#include <exception>
#include <stdexcept>
template<typename T>
class Array {
	public:
		Array() : _size(0)
		{}
		Array(unsigned int size) : _size(size), _data(new T[size])
		{
			for (size_t i = 0; i < size; i ++)
				_data[i] = T();
		}

		T& operator[](size_t i)
		{
			if (i >= _size)
				throw std::out_of_range("Out of range");
			return _data[i];
		}
		size_t size() const{return _size;}

		Array(const Array<T> &other) :
		_size(other._size),
		_data(new T[other._size])
		{
			for (size_t i = 0; i < other._size; i ++)
				_data[i] = other._data[i];
		}

		virtual ~Array(){ delete []_data;}

		Array<T>& operator=(const Array<T>& other)
		{
			delete[] _data;
			_data = new T[other._size];
			_size = other._size;
			for (size_t i = 0; i < _size; i++)
				_data[i] = other._data[i];
		}

	private:
		size_t _size;
		T *_data;
};


#endif