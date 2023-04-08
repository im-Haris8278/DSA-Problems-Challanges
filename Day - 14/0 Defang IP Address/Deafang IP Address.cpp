#include <iostream>
#include <sstream>
using namespace std;

class Solution
{
public:
    string defangIPaddr(string address)
    {
        stringstream ss;
        for (int i = 0; i < address.size(); i++)
        {
            if (address[i] == '.')
            {
                ss << "[.]";
            }
            else
            {
                ss << address[i];
            }
        }
        return ss.str();
    }
};

int main(void)
{
    Solution S;
    string address;
    cout << "Enter an IP Address: ";
    cin >> address;
    cout << S.defangIPaddr(address);

    return 0;
}