#include <iostream>

using namespace std;

int main()
{
    int c = 11;
    do
    {
        cout << "Count (DO) = " << c << endl;
        c = c + 1;
    } while (c < 10);

    cout << endl;

    // while นี้จะไม่ทำงานเพราะมีการเช็ค จากข้างบนแล้ว
    while (c < 10)
    {
        cout << "Count (While) = " << c << endl;
    }
    return 0;
}