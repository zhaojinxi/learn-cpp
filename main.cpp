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


class Base
{
public:
    inline virtual void who()
    {
        cout << "I am Base\n";
    }
    virtual ~Base() {}
};
class Derived : public Base
{
public:
    inline void who()  // 不写inline时隐式内联
    {
        cout << "I am Derived\n";
    }
};

int main()
{
    int * aa=new int {98};
    int bb=*new int {123};
    cout<<bb<<endl;
    cout<<*aa<<endl;
    // 此处的虚函数 who()，是通过类（Base）的具体对象（b）来调用的，编译期间就能确定了，所以它可以是内联的，但最终是否内联取决于编译器。
    Base b;
    b.who();

    // 此处的虚函数是通过指针调用的，呈现多态性，需要在运行时期间才能确定，所以不能为内联。
    Base *ptr = new Derived();
    ptr->who();

    // 因为Base有虚析构函数（virtual ~Base() {}），所以 delete 时，会先调用派生类（Derived）析构函数，再调用基类（Base）析构函数，防止内存泄漏。
    delete ptr;
    ptr = nullptr;

    system("pause");
    return 0;
}