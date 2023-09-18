#ifndef CPP_MODULE08_EX02_MUTANTSTACK_HPP_
# define CPP_MODULE08_EX02_MUTANTSTACK_HPP_
# include <stack>
# include <deque>

template <typename T>
class MutantStack: public std::stack<T> {

	public:
		typedef typename std::deque<T>::iterator			iterator;
		typedef typename std::deque<T>::reverse_iterator    reverse_iterator;
		MutantStack(): std::stack<T>() {};
		MutantStack(MutantStack const &other): std::stack<T>(other) {};
		~MutantStack() {};

		MutantStack &operator=(MutantStack const &other) {
			*this = other;
			return (*this);
		};

		iterator	end() {
			return (this->c.end());
		}

		iterator	begin() {
			return (this->c.begin());
		}

		reverse_iterator rend() {
			return (this->c.rend());
		}

		reverse_iterator rbegin() {
			return (this->c.rbegin());
		}

};

#endif