#include <iostream>
#include <vector>
#include <string>
using namespace std;

int findCharacterInString(string word, char character)
{
    for (int index = 0; index < word.length(); index++)
    {
        if (word[index] == character)
        {
            cout << index << " ";
        }
    }
    return -1;
}

// std::vector<int> findCharacterInString(std::string word, char character)
// {
//     std::vector<int> indexes;
//     for (int i = 0; i < word.length(); i++)
//     {
//         if (word[i] == character)
//         {
//             indexes.push_back(i);
//         }
//     }
//     return indexes;
// }

int main()
{
    string word;
    char character;
    cout << "Enter a String: ";
    cin >> word;
    cout << "Enter a Character: ";
    cin >> character;

    findCharacterInString(word, character);

    return 0;
}