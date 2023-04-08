class Solution
{
public:
    string licenseKeyFormatting(string s, int k)
    {
        transform(s.begin(), s.end(), s.begin(), [](char c)
                  { return std::toupper(c); });
        s.erase(std::remove(s.begin(), s.end(), '-'), s.end());

        int n = s.length();
        string result;
        int count = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (count == k)
            {
                result.insert(result.begin(), '-');
                count = 0;
            }
            result.insert(result.begin(), s[i]);
            count++;
        }

        return result;
    }
};