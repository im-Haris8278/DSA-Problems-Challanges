#include <iostream>
using namespace std;
template <typename T>

class DynamicArray
{
private:
    T *data;
    int size;

public:
    DynamicArray()
    {
        data = new T[1];
        size = 0;
    }

    ~DynamicArray()
    {
        delete[] data;
    }

    int length() const
    {
        return size;
    }

    T &operator[](int index) const
    {
        return data[index];
    }

    void push(const T &item)
    {
        if (sizeof(data) / sizeof(*data))
        {
            resize(2 * sizeof(data) / sizeof(*data));
        }
        data[size] = item;
        size++;
    }

    void resize(int capacity)
    {
        T *new_data = new T[capacity];
        for (int i = 0; i < size; i++)
        {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
    }
};

int main()
{
    DynamicArray<int> Array;
    for (int i = 0; i < 10; i++)
    {
        Array.push(i);
        cout << Array[i] << " ";
    }
    cout << endl;

    return 0;
}