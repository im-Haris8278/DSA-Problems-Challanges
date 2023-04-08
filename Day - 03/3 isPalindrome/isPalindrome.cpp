#include <iostream>
#include <string>
using namespace std;

int isPalindrome(string str)
{
    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);

    printf("%d", isPalindrome(str));

    return 0;
}