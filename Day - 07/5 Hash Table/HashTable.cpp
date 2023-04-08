#include <iostream>
#include <string>
using namespace std;

class MyHashTable
{
private:
    int size;
    string *keys;
    string *values;

    int get_hash(string key);

public:
    MyHashTable(int size);

    void add(string key, string value);

    string get(string key);
};

MyHashTable::MyHashTable(int size)
{
    this->size = size;
    this->keys = new string[size];
    this->values = new string[size];
}

void MyHashTable::add(string key, string value)
{
    int index = get_hash(key);

    while (keys[index] != "" && keys[index] != key)
    {
        index = (index + 1) % size;
    }
    keys[index] = key;
    values[index] = value;
}

string MyHashTable::get(string key)
{
    int index = get_hash(key);

    while (keys[index] != "")
    {
        if (keys[index] == key)
        {
            return values[index];
        }
        index = (index + 1) % size;
    }

    return "";
}

int MyHashTable::get_hash(string key)
{
    int hash = 0;

    for (char c : key)
    {
        hash += (int)c;
    }

    return hash % size;
}
