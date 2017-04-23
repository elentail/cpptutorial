#include <iostream>
#include <algorithm>

template<long FROM, long TO>
class Range {
public:
	// member typedefs provided through inheriting from std::iterator
	class iterator : public std::iterator<
		std::input_iterator_tag,   // iterator_category
		long,                      // value_type
		long,                      // difference_type
		const long*,               // pointer
		long                       // reference
	> {
		long num = FROM;
	public:
		explicit iterator(long _num = 0) : num(_num) {}
		//pre-fix
		iterator& operator++() { num = TO >= FROM ? num + 1 : num - 1; return *this; }
		//post-fix
		iterator operator++(int) { iterator retval = *this; ++(*this); return retval; }
		bool operator==(iterator other) const { return num == other.num; }
		bool operator!=(iterator other) const { return !(*this == other); }
		reference operator*() const { return num; }
	};
	iterator begin() { return iterator(FROM); }
	iterator end() { return iterator(TO >= FROM ? TO + 1 : TO - 1); }
};


template<class T>
class RkVector
{
	T* buffer = nullptr;
	int size_ = 0;

public:

	// inner class iterator - pattern
	class iterator :
		public std::iterator<std::input_iterator_tag, T, T, T*, T>
	{
		T* ptr_;
	public:
		explicit iterator(T* ptr) :ptr_(ptr) {}
		iterator& operator++() { iterator i = *this;  ptr_++; return i; }
		//iterator operator++(int) { iterator retval = *this; ++(*this); return retval; }

		reference operator*() { return *ptr_; }

		bool operator==(iterator other) const { return ptr_ == other.ptr_; }
		bool operator!=(iterator other) const { return ptr_ != other.ptr_; }
	};



	RkVector() {}
	RkVector(int size) 
	{
		buffer = new T[size];
		std::fill(buffer, buffer + size, T());
		size_ = size;
	}

	~RkVector() 
	{
		if (buffer != nullptr)
			delete[] buffer;
	}


	iterator begin()
	{
		return iterator(buffer);
	}
	iterator end()
	{
		return iterator(buffer + size_);
	}
};


int main() {
	RkVector<int> k(10);
	for (auto iter : k)
	{
		std::cout << " : " << iter << std::endl;
	}
}