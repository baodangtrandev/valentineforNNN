#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
   for (int i = 0; i < 50; i++)
   {
    cout << rand()%189+10 << endl; // 10-198 (198-10)+1 = 189
   }
   
    return 0;
    
}