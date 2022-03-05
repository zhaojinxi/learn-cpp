// #include <iostream>
// #include <string>
// #include <vector>
// #include <map>
// #include <set>
// #include <unordered_map>
// #include <unordered_set>
// #include <typeinfo>
// #include <algorithm>
// #include <limits>
// #include <math.h>

// using namespace std;

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

#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "spam.cpp"

int main(int argc, char *argv[])
{
    wchar_t *program = Py_DecodeLocale(argv[0], NULL);
    if (program == NULL)
    {
        fprintf(stderr, "Fatal error: cannot decode argv[0]\n");
        exit(1);
    }

    /* Add a built-in module, before Py_Initialize */
    if (PyImport_AppendInittab("spam", PyInit_spam) == -1)
    {
        fprintf(stderr, "Error: could not extend in-built modules table\n");
        exit(1);
    }

    /* Pass argv[0] to the Python interpreter */
    Py_SetProgramName(program);

    /* Initialize the Python interpreter.  Required.
       If this step fails, it will be a fatal error. */
    Py_Initialize();

    /* Optionally import the module; alternatively,
       import can be deferred until the embedded script
       imports it. */
    PyObject *pmodule = PyImport_ImportModule("spam");
    if (!pmodule)
    {
        PyErr_Print();
        fprintf(stderr, "Error: could not import module 'spam'\n");
    }

    // ...

        PyMem_RawFree(program);
    return 0;
}