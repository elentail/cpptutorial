#include <iostream>
#include <cstring>

using namespace std;

namespace rk
{

	using uint = unsigned int;
	using ushort = unsigned short;

	template<class T>
	class vector
	{
	public:
		vector(ushort size)
		{
			if (buffer == nullptr)
			{
				cout << "buffer is empty" << endl;
				buffer = new T[size];
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
			for (uint i = 0; i<total_size; ++i)
				buffer[i] = value;
		}
		void resize(const uint size)
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
		uint size() const
		{
			return total_size;
		}
		T operator[](uint index)
		{
			return buffer[index];
		}
		T* begin() const
		{
			return buffer;
		}
		T* end() const
		{
			return &buffer[total_size - 1];
		}
	private:
		uint total_size = 0;
		T* buffer = nullptr;
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