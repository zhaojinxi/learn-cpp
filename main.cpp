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

// class Solution {
// public:
//     bool isMatch(string s, string p) {
//         int m = s.size();
//         int n = p.size();

//         auto matches = [&](int i, int j) {
//             if (i == 0) {
//                 return false;
//             }
//             if (p[j - 1] == '.') {
//                 return true;
//             }
//             return s[i - 1] == p[j - 1];
//         };

//         vector<vector<int>> f(m + 1, vector<int>(n + 1));
//         f[0][0] = true;
//         for (int i = 0; i <= m; ++i) {
//             for (int j = 1; j <= n; ++j) {
//                 if (p[j - 1] == '*') {
//                     f[i][j] |= f[i][j - 2];
//                     if (matches(i, j - 1)) {
//                         f[i][j] |= f[i - 1][j];
//                     }
//                 }
//                 else {
//                     if (matches(i, j)) {
//                         f[i][j] |= f[i - 1][j - 1];
//                     }
//                 }
//             }
//         }
//         return f[m][n];
//     }
// };

// int main()
// {
//     string a {"zxxh"};
//     string b {"x*"};

//     Solution tmp;
//     tmp.isMatch(a,b);
//     return 0;
// }

int main(int argc, char const *argv[])
{
    int year;
    bool isLeapYear;
    cout << "Enter the year: ";
    cin >> year;
    isLeapYear = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
    if (isLeapYear)
    {
        cout << year << " is a leap year" << endl;
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }
    system("pause");
    return 0;
}