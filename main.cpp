#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <typeinfo>
#include <algorithm>
#include <limits>

using namespace std;


class Solution
{
public:
    bool isPalindrome(int x)
    {
        if(x<0)
        {
            return false;
        }

        string tmp{to_string(x)};
        int length=tmp.length();
        if (length%2 ==1)
        {
            length=length-1;
        }
        for (int i=0;i<length/2;i++)
        {
            if (tmp.at(i)!=tmp.at(tmp.length()-i-1))
            {
                return false;
            }
        }
        return true;
    }
};


int main()
{
    int s{123321};

    Solution tmp;
    tmp.isPalindrome(s);
    return 0;
}