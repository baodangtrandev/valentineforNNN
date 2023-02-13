#include <iostream>
using namespace std;

int main()
{
    int* a;
    *a = 5;
    cout << "hello";
    cout << *a << "\t" << a;
    return 0;
}