#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    while (c < 10)
    {
        cout << "While Loop Count = " << c << endl;
        c = c + 1;
    }

    cout << endl;

    for (int count = 0; count < 10; count++)
    {
        cout << "For Loop Count = " << count << endl;
    }
    return 0;
}