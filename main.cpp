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
#include <math.h>

using namespace std;

template <class T>
class Base {
public:
    void hello() {std::cout << "hello\n";}

    void hello1() {std::cout << "hello1\n";}

    template <unsigned N>
    void hello2() {std::cout << "hello2<" << N << ">()\n";}

};

template <class T>
class Drivered: public Base<T> {
public:

    // using Base<T>::hello;

    void test()
    {
        hello();
        this->hello1();
        this->template hello2<100>();
 }
};

int main(int argc, char *argv[]) {
    Drivered<int> d;
    d.test();
}
