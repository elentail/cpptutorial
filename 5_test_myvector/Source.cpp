#include <iostream>
#include <cstring>

using namespace std;

namespace rk
{
	template<class T>
	class vector
	{
		T* buffer = nullptr;
		int total_size = 0;

	public:
		// inner class iterator - pattern
		class iterator :
			public std::iterator<std::input_iterator_tag, T, T, T*, T>
		{
			T* ptr_;
		public:
			explicit iterator(T* ptr) :ptr_(ptr) {}
			iterator& operator++() { ptr_++; return (*this); }
			//iterator operator++(int) { iterator retval = *this; ++(*this); return retval; }

			reference operator*() { return *ptr_; }

			bool operator==(iterator other) const { return ptr_ == other.ptr_; }
			bool operator!=(iterator other) const { return ptr_ != other.ptr_; }
		};

		vector(int size)
		{
			if (buffer == nullptr)
			{
				cout << "buffer is empty" << endl;
				buffer = new T[size];
				std::fill(buffer, buffer + size, T());
				total_size = size;
			}
		}


		vector()
		{
		}

		~vector()
		{
			if (total_size > 1)
				delete buffer;
			else
				delete[] buffer;
		}

		void fill(const T value)
		{
			for (int i = 0; i<total_size; ++i)
				buffer[i] = value;
		}
		void resize(const int size)
		{
			if (size > total_size)
			{
				T* temp;
				temp = new T[size];
				memcpy(temp, buffer, total_size);
				delete[] buffer;

				buffer = temp;
				total_size = size;
			}
		}
		int size() const
		{
			return total_size;
		}
		T operator[](int index)
		{
			return buffer[index];
		}


		iterator begin()
		{
			return iterator(buffer);
		}
		iterator end()
		{
			return iterator(buffer + total_size);
		}
	};
}

template<class T>
ostream& operator<<(ostream& os, rk::vector<T>& other)
{
	cout << other.size() << endl;
	return os;
}

int main()
{
	rk::vector<int> vec(10);
	vec.fill(20);
	vec.resize(20);
	for (const auto& iter : vec)
	{
		cout << iter << endl;
	}
	cout << vec[19] << endl;
	cout << vec << endl;
	return 0;
}

