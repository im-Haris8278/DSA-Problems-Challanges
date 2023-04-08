#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution
{
public:
    int numUniqueEmails(vector<string> &emails)
    {
        unordered_set<string> uniqueEmails;
        for (string email : emails)
        {
            string cleanEmail;
            bool ignore = false;
            bool domain = false;

            for (char e : email)
            {
                if (e == '@')
                {
                    ignore = false;
                    domain = true;
                }

                if (e == '.' && !domain)
                {
                    continue;
                }

                if (e == '+' && !domain)
                {
                    ignore = true;
                }

                if (!ignore)
                {
                    cleanEmail += e;
                }
            }

            uniqueEmails.insert(cleanEmail);
        }

        return uniqueEmails.size();
    }
};

int main()
{
    Solution S;
    vector<string> emails = {" test.email + alex @leetcode.com ", " test.e.mail + bob.cathy @leetcode.com ", " testemail + david @lee.tcode.com "};
    cout << S.numUniqueEmails(emails);

    return 0;
}