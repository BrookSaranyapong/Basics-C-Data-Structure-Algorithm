#include <iostream>

using namespace std;

int add(int x, int y)
{
    if (x > y)
    {
        return x - y;
    }
    return x + y;
}

int main()
{
    int result = add(3, 2);
    cout << result;
    return 0;
}