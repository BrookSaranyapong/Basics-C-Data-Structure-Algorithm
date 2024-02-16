#include <iostream>
#include <string>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{

    int sumNumber = add(3, 5);
    cout << sumNumber;
    return 0;
}