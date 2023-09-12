#ifndef CPP_MODULE08_EX02_MUTANTSTACK_HPP_
# define CPP_MODULE08_EX02_MUTANTSTACK_HPP_

#include <cstdlib>
#include <exception>
#include <stack>
template <typename T>
class MutantStack : public std::stack<T> {
	private:
		size_t	_allocated_size;
		int 	_indexHead;
		T*		_data;

		void 	realloc(){
			T* newData;
			size_t newSize;

			if (_allocated_size == ULONG_MAX)
				throw std::exception(); //need to specify
			if (_allocated_size >= ULONG_MAX/3)
				newSize = ULONG_MAX;
			else
				newSize = _allocated_size * 2 + (_allocated_size == 0);
			newData = new T[newSize];
			for (size_t t = 0; t < _allocated_size; t++)
				newData[t] = _data[t];

			delete [] _data;
			_data = newData;
			_allocated_size = newSize;

		}
		MutantStack(size_t size): _allocated_size(size), _indexHead(0), _data(new T[size])
		{};

	public:
		class StackEmpty : public std::exception {
				const char* what() const throw(){ return "Stack is empty";	}
		};
		MutantStack(): _allocated_size(0), _indexHead(-1), _data(NULL) {};
		MutantStack(const MutantStack &other)
		{
			if (this != *other){
				for (Iterator i = other.begin(); i != other.end(); i++)
					push(*i);
			}
			return *this;
		};
		virtual ~MutantStack()
		{
			delete [] _data;
		};

//		MutantStack &operator=(const MutantStack &other);
		T& top() const {
			if (_indexHead == -1)
				throw StackEmpty();
			return (_data[_indexHead]);
		}

		bool empty() const noexcept{ return (_indexHead == -1);}
		size_t size() const noexcept{
			return _indexHead + 1;
		};

		void	push(T& value)
		{
			_indexHead++;
			if (_indexHead + 1>= _allocated_size)
				realloc();
			_data[_indexHead] = value;
		}
		void	push(T const & value){
			_indexHead++;
			if (_indexHead >= _allocated_size)
				realloc();
			_data[_indexHead] = value;
		}
		T&	pop(){
			if (_indexHead == -1)
				throw new StackEmpty();
			_indexHead--;
			return _data[_indexHead +1];
		}
		class Iterator {
			private:
				T* ptr;

			public:
				Iterator(T* p) : ptr(p) {}

				Iterator& operator++() {
					++ptr;
					return *this;
				}

				Iterator& operator--() {
					--ptr;
					return *this;
				}

				T& operator*() {
					return *ptr;
				}

				bool operator!=(const Iterator& other) {
					return ptr != other.ptr;
				}
		};
		Iterator begin() {
			return Iterator(&_data[0]);
		}
		Iterator end() {
			return Iterator(&_data[_allocated_size]);
		}
};

#endif